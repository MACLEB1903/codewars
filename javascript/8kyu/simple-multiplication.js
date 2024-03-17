/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/583710ccaa6717322c000105/train/javascript


Instructions:
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise

*/

function simpleMultiplication(number) {
  return number % 2 == 0 ? number * 8 : number * 9;
}
