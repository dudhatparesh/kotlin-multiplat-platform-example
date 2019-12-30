package com.example.demo.dispatchers


import kotlinx.coroutines.*
import platform.Foundation.NSRunLoop
import platform.Foundation.performBlock
import platform.darwin.*
import kotlin.coroutines.CoroutineContext
import kotlin.native.concurrent.SharedImmutable

@InternalCoroutinesApi
actual class AppDispatchersImpl : AppDispatchers, CoroutineDispatcher(), Delay {
    @SharedImmutable
    override val main: CoroutineDispatcher =
        NsQueueDispatcher(dispatch_get_main_queue())

    @SharedImmutable
    override val io: CoroutineDispatcher =
        NsQueueDispatcher(dispatch_get_main_queue())

    internal class NsQueueDispatcher(
        @SharedImmutable private val dispatchQueue: dispatch_queue_t
    ) : CoroutineDispatcher() {
        override fun dispatch(context: CoroutineContext, block: Runnable) {
            NSRunLoop.mainRunLoop().performBlock {
                block.run()
            }
        }
    }


    @InternalCoroutinesApi
    override fun scheduleResumeAfterDelay(timeMillis: Long, continuation: CancellableContinuation<Unit>) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, timeMillis * 1_000_000), dispatch_get_main_queue()) {
            try {
                with(continuation) {
                    resumeUndispatched(Unit)
                }
            } catch (err: Throwable) {
                throw err
            }
        }
    }

    @InternalCoroutinesApi
    override fun invokeOnTimeout(timeMillis: Long, block: Runnable): DisposableHandle {
        val handle = object : DisposableHandle {
            var disposed = false
                private set

            override fun dispose() {
                disposed = true
            }
        }
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, timeMillis * 1_000_000), dispatch_get_main_queue()) {
            try {
                if (!handle.disposed) {
                    block.run()
                }
            } catch (err: Throwable) {
                throw err
            }
        }

        return handle
    }

    override fun dispatch(context: CoroutineContext, block: Runnable) {
        
    }

}