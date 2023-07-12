package com.example

object HelloJNI {
    init {
        System.loadLibrary("hello")
    }

    external fun sayHello(): String

    @JvmStatic
    fun main(args: Array<String>) {
        println(sayHello())
    }
}