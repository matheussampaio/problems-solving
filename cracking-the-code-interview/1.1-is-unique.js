#! /usr/bin/env node

/*
 * 1.1
 * Is Unique: Implement an algorithm to determine if a string has all unique
 * characters. What if you cannot use additional data structures?
 */
function isUnique(str) {
  const letters = {}

  for (let i = 0; i < str.length; i++) {
    const letter = str[i].toLowerCase()

    letters[letter] = 1
  }

  return Object.entries(letters).length === 26
}

function isUniqueWithoutDataStructres(str) {
  let letters = 0

  while (str.length) {
    const letter = str[0]

    str = str.replace(letter, '')

    letters += 1
  }

  return letters === 26
}

console.assert(isUnique('qwertyuiopasdfghjklzxcvbnm'))
console.assert(isUnique('qwertyuiopasdfghjklzxcvbnmm'))
console.assert(isUnique('') === false)
console.assert(isUnique('aa') === false)

console.assert(isUniqueWithoutDataStructres('qwertyuiopasdfghjklzxcvbnm'))
console.assert(isUniqueWithoutDataStructres('qwertyuiopasdfghjklzxcvbnm'))
console.assert(isUniqueWithoutDataStructres('qwertyuiopasdfghjklzxcvbnmm') === false)
console.assert(isUniqueWithoutDataStructres('') === false)
console.assert(isUniqueWithoutDataStructres('aa') === false)
