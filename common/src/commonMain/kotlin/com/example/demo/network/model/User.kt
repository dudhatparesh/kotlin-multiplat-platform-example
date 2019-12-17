package com.example.demo.network.model

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class User(
    @SerialName("login")
    val userName: String,
    @SerialName("id")
    val id: Long,
    @SerialName("type")
    val userType: String,
    @SerialName("site_admin")
    val siteAdmin: Boolean
)
