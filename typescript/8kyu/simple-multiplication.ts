/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/583710ccaa6717322c000105/train/typescript


Instructions:
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise

*/

export function simpleMultiplication(num: number): number {
  return num % 2 == 0 ? num * 8 : num * 9;
}
