///
/// HybridTestObject.cpp
/// Wed Jul 31 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridTestObject.hpp"

namespace margelo::nitro::image {

  void HybridTestObject::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybridMethod("createMap", &HybridTestObject::createMap, this);
    registerHybridMethod("mapRoundtrip", &HybridTestObject::mapRoundtrip, this);
    registerHybridMethod("passVariant", &HybridTestObject::passVariant, this);
    registerHybridMethod("flip", &HybridTestObject::flip, this);
    registerHybridMethod("passTuple", &HybridTestObject::passTuple, this);
    registerHybridMethod("getValueFromJsCallback", &HybridTestObject::getValueFromJsCallback, this);
  }

} // namespace margelo::nitro::image