package com.example.demo.network

import com.example.demo.dispatchers.AppDispatchers
import com.example.demo.network.model.User
import io.ktor.client.HttpClient
import io.ktor.client.HttpClientConfig
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.DEFAULT
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.accept
import io.ktor.http.ContentType
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.withContext
import kotlinx.coroutines.withTimeout
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.json.Json

@UnstableDefault
open class ApiClient(
    val dispatchers: AppDispatchers
) {
    suspend fun <T> onNetworkWithTimeOut(
        url: String,
        timeoutInMillis: Long,
        block: suspend CoroutineScope.() -> Any
    ): T {
        return withTimeout(timeoutInMillis) {
            withContext(dispatchers.io, block)
        } as T


    }


    suspend fun <T> onNetworkWithoutTimeOut(url: String, block: suspend CoroutineScope.() -> Any): T {
        return withContext(dispatchers.io, block) as T

    }
}

@kotlinx.serialization.UnstableDefault
internal val json = Json.nonstrict

/**
 * Creates a new [HttpClient] with the project serializers.
 */
@UnstableDefault
internal fun httpClient(
    withLogging: Boolean = true,
    engine: HttpClientEngine? = null
): HttpClient {
    val config: HttpClientConfig<*>.() -> Unit = {
        if (withLogging) {
            install(Logging) {
                logger = Logger.DEFAULT
                level = LogLevel.ALL
            }
        }

        install(JsonFeature) {
            serializer = KotlinxSerializer(json).apply {
                setMapper(User::class, User.serializer())
            }
        }

        defaultRequest {
            accept(ContentType.Application.Json)

        }

    }

    return if (engine == null) HttpClient(config) else HttpClient(engine, config)
}
