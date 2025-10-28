/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/typescript


Instructions:
Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.

For example:
a = 1
b = 4

--> [1, 2, 3, 4]

*/

export function between(a: number, b: number): number[] {
  return  [...Array(b+1-a)].map((_, i) => a+i);
}
