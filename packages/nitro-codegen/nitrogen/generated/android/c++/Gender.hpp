///
/// Gender.hpp
/// Sat Jul 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#include <cstddef>
#include <cstdint>
#include <NitroModules/JSIConverter.hpp>

enum class Gender {
  male,
  female,
};

namespace margelo {

  // C++ Gender <> JS Gender (union)
  template <> struct JSIConverter<Gender> {
    static constexpr uint64_t hashString(const char* str, size_t length) {
      // Uses the FNV-1a hashing algorithm
      uint64_t hash = 14695981039346656037ull; // FNV offset basis
      const uint64_t fnv_prime = 1099511628211ull;

      for (size_t i = 0; i < length; ++i) {
          hash ^= static_cast<uint64_t>(str[i]);
          hash *= fnv_prime;
      }

      return hash;
    }

    static Gender fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("male", 4): return Gender::male;
        case hashString("female", 6): return Gender::female;
        default:
          throw std::runtime_error("Cannot convert " + unionValue + " to Gender - invalid value!");
      }
    }
    static jsi::Value toJSI(jsi::Runtime& runtime, Gender arg) {
      switch (arg) {
        case Gender::male: return JSIConverter<std::string>(runtime, "male");
        case Gender::female: return JSIConverter<std::string>(runtime, "female");
        default:
          throw std::runtime_error("Cannot convert Gender to JS - invalid value: "
                                     + std::to_string(arg) + "!");
      }
    }
  };

} // namespace margelo