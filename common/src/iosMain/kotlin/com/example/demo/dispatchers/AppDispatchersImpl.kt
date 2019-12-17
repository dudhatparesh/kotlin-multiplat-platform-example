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

    @ExperimentalCoroutinesApi
    @InternalCoroutinesApi
    override fun scheduleResumeAfterDelay(timeMillis: Long, continuation: CancellableContinuation<Unit>) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, timeMillis * 1_000_000), dispatch_get_main_queue()) {
            try {
                with(continuation) {
                    resumeUndispatched(Unit)
                }
            } catch (error: Throwable) {
                throw error
            }
        }
    }

    override fun dispatch(context: CoroutineContext, block: Runnable) {
        dispatch_async(dispatch_get_main_queue()) {
            try {
                block.run()
            } catch (err: Throwable) {
                throw err
            }
        }
    }

}