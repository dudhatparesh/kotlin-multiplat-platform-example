package com.example.demo.presenter

import com.example.demo.dispatchers.AppDispatchers
import com.example.demo.network.GithubApiClientImpl
import com.example.demo.network.model.User
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlinx.coroutines.async
import kotlinx.coroutines.launch
import kotlinx.serialization.UnstableDefault
import kotlin.coroutines.CoroutineContext

@UnstableDefault
class UserPresentation(private val dispatchers: AppDispatchers) :
    CoroutineScope {
    private val dispatcher = dispatchers
    private val job = Job()

    override val coroutineContext: CoroutineContext
        get() = dispatcher.main + job
    
    val githubApiClient = GithubApiClientImpl(dispatchers)

    fun fetchUsersWithoutTimeout(handler: (User) -> Unit) {
        launch {
            val user = githubApiClient.fetchUserWithoutTimeout()
            handler.invoke(user)
        }
    }


    fun fetchUsersWithTimeOut(timeoutInMillis: Long, handler: (User) -> Unit) {
        launch {
            val user = githubApiClient.fetchUserWithTimeout(timeoutInMillis)
            handler.invoke(user)
        }
    }


    fun fetchUsersAsyncWithTimeOut(timeoutInMillis: Long, handler: (User) -> Unit) {
        launch {
            val user = async { githubApiClient.fetchUserWithTimeout(timeoutInMillis) }
            handler.invoke(user.await())
        }
    }
}