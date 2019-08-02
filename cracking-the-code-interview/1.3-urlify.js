#! /usr/bin/env node

/*
 * 1.3
 * URLify: Write a method to replace all spaces in a string with '%20'. You may
 * assume that the string has sufficient space at the end to hold the
 * additional characters, and that you are given the "true" length of the
 * string.
 */
function URLify(str) {
  return str.trim().replace(/ /g, '%20')
}

console.assert(URLify('Mr John Smith    ', 13) === 'Mr%20John%20Smith')
