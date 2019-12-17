package com.example.demo.network

import com.example.demo.network.model.User

interface GithubApiClient {
    suspend fun fetchUserWithoutTimeout(): User
    suspend fun fetchUserWithTimeout(timeoutInMillis: Long = 10 * 1000): User
}