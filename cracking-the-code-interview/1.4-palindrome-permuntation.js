#! /usr/bin/env node

/*
 * 1.4
 * Palindrome Permutation: Given a string, write a function to check if it is a
 * permutation of palindrome. A palindrome is a word or phrase that is the same
 * forwards and backwards. A permutation is a rearrangement of letters. The
 * palindrome does not need to be limited to just dictionary words.
 */
function palindromePermutation(str) {
  const letters = {}

  for (let i = 0; i < str.length; i++) {
    const c = str[i].toLowerCase()

    if (c === ' ') {
      continue
    }

    letters[c] = letters[c] + 1 || 1
  }

  let odds = 0

  for (value of Object.values(letters)) {
    if (value % 2) {
      odds += 1
    }

    if (odds > 1) {
      return false
    }
  }

  return true
}

console.assert(palindromePermutation('Tact Coa'))
console.assert(palindromePermutation('Matheus') === false)
