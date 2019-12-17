package com.example.demo.dispatchers


import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.InternalCoroutinesApi
import kotlinx.coroutines.Runnable
import platform.Foundation.NSRunLoop
import platform.Foundation.performBlock
import platform.darwin.dispatch_get_main_queue
import platform.darwin.dispatch_queue_t
import kotlin.coroutines.CoroutineContext
import kotlin.native.concurrent.SharedImmutable

@InternalCoroutinesApi
actual class AppDispatchersImpl : AppDispatchers {
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


}