///
/// JHybridImageFactorySpec.cpp
/// Wed Aug 14 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridImageFactorySpec.hpp"



#include "JHybridImageSpec.hpp"

namespace margelo::nitro::image {

  jni::local_ref<JHybridImageFactorySpec::jhybriddata> JHybridImageFactorySpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridImageFactorySpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridImageFactorySpec::initHybrid),
    });
  }

  size_t JHybridImageFactorySpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart.get());
  }

  // Properties
  

  // Methods
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromFile(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(std::string)>("loadImageFromFile");
    throw std::runtime_error("loadImageFromFile(...) is not yet implemented!");
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromURL(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(std::string)>("loadImageFromURL");
    throw std::runtime_error("loadImageFromURL(...) is not yet implemented!");
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::loadImageFromSystemName(const std::string& path) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(std::string)>("loadImageFromSystemName");
    throw std::runtime_error("loadImageFromSystemName(...) is not yet implemented!");
  }
  std::shared_ptr<margelo::nitro::image::HybridImageSpec> JHybridImageFactorySpec::bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JHybridImageSpec::javaobject>(jni::alias_ref<JHybridImageSpec::javaobject>)>("bounceBack");
    throw std::runtime_error("bounceBack(...) is not yet implemented!");
  }

} // namespace margelo::nitro::image
