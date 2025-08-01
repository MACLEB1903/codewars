/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/javascript


Instructions:
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:
solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false

*/

function solution(str, ending) {
  return str.slice(-ending.length) === ending;
}

function solution(str, ending) {
  return str.endsWith(ending);
}
