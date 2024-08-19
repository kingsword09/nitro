///
/// HybridImageFactorySpec.swift
/// Mon Aug 19 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the ImageFactory HybridObject.
 * Implement this protocol to create Swift-based instances of ImageFactory.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridImageFactory : HybridImageFactorySpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridImageFactorySpec: HybridObjectSpec {
  // Properties
  

  // Methods
  func loadImageFromFile(path: String) throws -> HybridImageSpec
  func loadImageFromURL(path: String) throws -> HybridImageSpec
  func loadImageFromSystemName(path: String) throws -> HybridImageSpec
  func bounceBack(image: HybridImageSpec) throws -> HybridImageSpec
}

public extension HybridImageFactorySpec {
  /**
   * Create a new instance of HybridImageFactorySpecCxx for the given HybridImageFactorySpec.
   *
   * Instances of HybridImageFactorySpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> HybridImageFactorySpecCxx {
    return HybridImageFactorySpecCxx(self)
  }
}
