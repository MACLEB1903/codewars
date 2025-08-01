/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/javascript


Instructions:
You will be given an vector of string(s). You must sort it alphabetically (case-sensitive!!) and then return the first value.
The returned value must be a string, and have "***" between each of its letters.
You should not remove or add elements from/to the array.

*/

function twoSort(s) {
  return s.sort()[0].split("").join("***");
}
