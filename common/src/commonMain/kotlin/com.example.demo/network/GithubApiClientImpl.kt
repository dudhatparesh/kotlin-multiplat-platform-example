package com.example.demo.network

import com.example.demo.dispatchers.AppDispatchers
import com.example.demo.network.model.User
import io.ktor.client.request.get
import kotlinx.serialization.UnstableDefault

@UnstableDefault
class GithubApiClientImpl(dispatchers: AppDispatchers) : ApiClient(dispatchers), GithubApiClient {
    override suspend fun fetchUserWithoutTimeout(): User {
        val url = "https://api.github.com/users/mojombo"
        return onNetworkWithoutTimeOut {
            httpClient(true).get<User>(url)
        }
    }

    override suspend fun fetchUserWithTimeout(timeoutInMillis: Long): User {
        val url = "https://api.github.com/users/mojombo"
        return onNetworkWithTimeOut(timeoutInMillis) {
            httpClient(true).get<User>(url)
        }
    }

}