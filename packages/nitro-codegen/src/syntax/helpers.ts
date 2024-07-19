export function createFileMetadataString(filename: string): string {
  const now = new Date()
  return `
///
/// ${filename}
/// ${now.toDateString()}
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © ${now.getFullYear()} Marc Rousavy @ Margelo
///
`.trim()
}

export function toReferenceType(type: string): `const ${typeof type}&` {
  return `const ${type}&`
}

export function escapeCppName(string: string): string {
  // Replace non-alphanumeric characters with underscores
  let escapedStr = string.replace(/[^a-zA-Z0-9_]/g, '_')

  // Ensure the first character is a letter or underscore
  if (!/^[a-zA-Z_]/.test(escapedStr)) {
    escapedStr = '_' + escapedStr
  }

  return escapedStr
}

export function removeDuplicates<T>(
  array: T[],
  equals: (a: T, b: T) => boolean
): T[] {
  const result: T[] = []
  for (const item of array) {
    if (result.some((r) => equals(r, item))) {
      // skip it, it's a duplicate
    } else {
      result.push(item)
    }
  }
  return result
}
