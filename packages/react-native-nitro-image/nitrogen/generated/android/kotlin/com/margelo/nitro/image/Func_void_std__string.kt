///
/// Func_void_std__string.kt
/// Fri Aug 02 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.image

import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip

/**
 * Represents the JavaScript callback "(path: String) -> Unit".
 * This is implemented in C++, via a `std::function<...>`.
 */
@DoNotStrip
@Keep
@Suppress("KotlinJniMissingFunction")
class Func_void_std__string @DoNotStrip @Keep private constructor(hybridData: HybridData) {
  @DoNotStrip
  @Keep
  private val mHybridData: HybridData

  init {
    mHybridData = hybridData
  }

  /**
   * Call the given JS callback.
   * @throws Throwable if the JS function itself throws an error, or if the JS function/runtime has already been deleted.
   */
  external fun call(path: String): Unit
}
