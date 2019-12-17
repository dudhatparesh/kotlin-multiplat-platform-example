package sample

actual fun <T> runTest(block: suspend () -> T): dynamic = promise { block() }

