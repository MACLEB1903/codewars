/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/529eef7a9194e0cbc1000255/train/javascript


Instructions:
An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

Examples:
"foefet" is an anagram of "toffee"
"Buckethead" is an anagram of "DeathCubeK"

*/

var isAnagram = function(test, original) {
  return [...original.toLowerCase()].sort().join("") == [...test.toLowerCase()].sort().join("")
};


const sortWord = (word) => [...word.toLowerCase()].sort().join("");
var isAnagram = function(test, original) {
  return sortWord(original) === sortWord(test);
};