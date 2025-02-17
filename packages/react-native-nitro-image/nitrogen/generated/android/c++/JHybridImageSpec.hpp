///
/// HybridImageSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridImageSpec.hpp"

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridImageSpec final: public jni::HybridClass<JHybridImageSpec, JHybridObject>,
                                public HybridImageSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridImageSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridImageSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridImageSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridImageSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    ImageSize getSize() override;
    PixelFormat getPixelFormat() override;
    double getSomeSettableProp() override;
    void setSomeSettableProp(double someSettableProp) override;

  public:
    // Methods
    double toArrayBuffer(ImageFormat format) override;
    void saveToFile(const std::string& path, const std::function<void(const std::string& /* path */)>& onFinished) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridImageSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image
