/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/javascript


Instructions:
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

*/

function isIsogram(str) {
  return [...new Set(str.toLowerCase())].length === str.length;
}
