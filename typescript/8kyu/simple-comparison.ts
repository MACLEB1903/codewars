/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57f6ecdfcca6e045d2001207/train/typescript


Instructions:
Write a function that will compare two values, one will be a number and one will be a string. Return true if they are the same character (regardless of their different data types) and return false if they are not.
To make this challange harder and to promp the challenger to read up about coersion I have disabled some of the built in methods including .toString(), .join(), .split(), parseInt and .Number().

*/

function add(a: number | string, b: number | string): boolean {
  return +a == +b;
}
