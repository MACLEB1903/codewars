/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/javascript


Instructions:
Complete the solution so that it reverses the string passed into it.

'world'  =>  'dlrow'
'word'   =>  'drow'

*/

function solution(str) {
  return [...str].reverse().join("");
}
