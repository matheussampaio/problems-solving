#! /usr/bin/env node

/*
 * 1.2
 * Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
 */
function checkPermutation(str1, str2) {
  if (str1.length !== str2.length) {
    return false
  }

  const letters = {}

  for (let i = 0; i < str1.length; i++) {
    const letter = str1[i]

    if (letters[letter] == null) {
      letters[letter] = 0
    }

    letters[letter] += 1
  }

  for (let i = 0; i < str2.length; i++) {
    const letter = str2[i]

    if (!letters[letter]) {
      return false
    }

    letters[letter] -= 1

    if(!letters[letter]) {
      delete letters[letter]
    }
  }

  return Object.entries(letters).length === 0
}

console.assert(checkPermutation('abc', 'acb'))
console.assert(checkPermutation('abc', 'a') === false)
