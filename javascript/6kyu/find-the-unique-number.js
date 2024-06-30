/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55f81f9aa51f9b72a200002f/train/javascript


Instructions:
There is an array with some numbers. All numbers are equal except for one. Try to find it!

findUniq([ 1, 1, 1, 2, 1, 1 ]) === 2
findUniq([ 0, 0, 0.55, 0, 0 ]) === 0.55
It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance.

*/

function findUniq(arr) {
  const cleanNum = [...new Set(arr)]
  const uniqueNum = cleanNum.map(n => arr.filter( l =>  l === n)).filter(arr => arr.length === 1)[0][0]
 return uniqueNum
}
