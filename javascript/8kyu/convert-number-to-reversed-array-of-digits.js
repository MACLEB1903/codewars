/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/javascript


Instructions:
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example (Input => Output):
35231 => [1,3,2,5,3]
0     => [0]

*/

function digitize(n) {
  return [...n.toString()].reverse().map((n) => +n);
}

function digitize(n) {
  return [...n.toString()].reverse().map(Number);
}
