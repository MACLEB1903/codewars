/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/554003323fd6af1c4200004e/train/javascript


Instructions:
Create a function that checks if a number is odd.
Expect negative and decimal numbers too. Remember... all negative numbers can also be either odd or even.
Decimal numbers always return false

Example:
isOdd(2)--> false
isOdd(5)--> true
isOdd(4)--> false
isOdd(-17)--> true
isOdd(-7.0)--> true
isOdd(-7.1)--> false
isOdd(4.23)--> false
isOdd(5.0)-->true
isOdd(5.23)--> false

*/

function isOdd(n) {
  return Math.abs(n) % 2 === 1;
}
