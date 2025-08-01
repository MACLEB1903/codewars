/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/javascript


Instructions:
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.

*/

function findShort(s) {
  return Math.min(...s.split(" ").map((w) => w.length));
}

function findShort(s) {
  return s.split(" ").sort((a, b) => a.length - b.length)[0].length;
}
