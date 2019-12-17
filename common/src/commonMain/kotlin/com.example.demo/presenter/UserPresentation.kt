package com.example.demo.presenter

import com.example.demo.dispatchers.AppDispatchers
import com.example.demo.network.GithubApiClient
import com.example.demo.network.model.User
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import kotlin.coroutines.CoroutineContext

class UserPresentation(private val githubApiClient: GithubApiClient, private val dispatchers: AppDispatchers) :
    CoroutineScope {
    private val dispatcher = dispatchers
    private val job = Job()

    override val coroutineContext: CoroutineContext
        get() = dispatcher.main + job

    fun fetchUsersWithoutTimeout(handler: (User) -> Unit) {
        launch {
            val user = githubApiClient.fetchUserWithoutTimeout()
            handler(user)
        }
    }

    fun fetchUsersWithTimeOut(timeoutInMillis: Long, handler: (User) -> Unit) {
        launch {
            val user = githubApiClient.fetchUserWithTimeout(timeoutInMillis)
            handler(user)
        }
    }
}