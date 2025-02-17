///
/// Car.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `Car`, backed by a C++ struct.
 */
public typealias Car = margelo.nitro.image.Car

public extension Car {
  private typealias bridge = margelo.nitro.image.bridge.swift

  /**
   * Create a new instance of `Car`.
   */
  init(year: Double, make: String, model: String, power: Double, powertrain: Powertrain, driver: Person?) {
    self.init(year, std.string(make), std.string(model), power, powertrain, { () -> bridge.std__optional_Person_ in
      if let actualValue = driver {
        return bridge.create_std__optional_Person_(actualValue)
      } else {
        return .init()
      }
    }())
  }

  var year: Double {
    @inline(__always)
    get {
      return self.__year
    }
    @inline(__always)
    set {
      self.__year = newValue
    }
  }
  
  var make: String {
    @inline(__always)
    get {
      return String(self.__make)
    }
    @inline(__always)
    set {
      self.__make = std.string(newValue)
    }
  }
  
  var model: String {
    @inline(__always)
    get {
      return String(self.__model)
    }
    @inline(__always)
    set {
      self.__model = std.string(newValue)
    }
  }
  
  var power: Double {
    @inline(__always)
    get {
      return self.__power
    }
    @inline(__always)
    set {
      self.__power = newValue
    }
  }
  
  var powertrain: Powertrain {
    @inline(__always)
    get {
      return self.__powertrain
    }
    @inline(__always)
    set {
      self.__powertrain = newValue
    }
  }
  
  var driver: Person? {
    @inline(__always)
    get {
      return { () -> Person? in
        if let actualValue = self.__driver.value {
          return actualValue
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__driver = { () -> bridge.std__optional_Person_ in
        if let actualValue = newValue {
          return bridge.create_std__optional_Person_(actualValue)
        } else {
          return .init()
        }
      }()
    }
  }
}
