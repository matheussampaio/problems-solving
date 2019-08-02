#! /usr/bin/env node

function oneAway(str1, str2) {
  let op = 'edit'

  // if it's smaller, I need to 'add'
  if (str1.length < str2.length) {
    op = 'add'
  // if it's bigger, I need to 'remove'
  } else if (str1.length > str2.length) {
    op = 'rm'
  // if they are the same, I need to 'edit'
  }

  for (let i = 0; i < str1.length; i++) {
    if (str1[i] !== str2[i]) {

      if (op === 'add') {
        str1 = str1.slice(0, i) + str2[i] + str1.slice(i)
      } else if (op === 'rm') {
        str1 = str1.slice(0, i) + str1.slice(i + 1)
      } else {
        str1 = str1.slice(0, i) + str2[i] + str1.slice(i + 1)
      }

      break
    }
  }

  return str1 === str2
}

console.assert(oneAway('pale', 'ple'))
console.assert(oneAway('pales', 'pale'))
console.assert(oneAway('pale', 'bale'))
console.assert(oneAway('pale', 'bake') === false)
