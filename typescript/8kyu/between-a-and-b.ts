/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/572f85cdd59ee794c30010cf/train/typescript


Instructions:
Return product of numbers between a and b (both non-negative). If it's impossible then return 'Error' in JavaScript or throw an exception in C#.

For example:
product(2,5) => 3 * 4?: any = 12
product(5,2) => 'Error' / Exception

*/

export function product(a: number, b: number): number | string {
  let arr: number[] = [];
  for (let i = a + 1; i < b; i++) {
    arr.push(i);
  }

  if (!arr.length) return "Error";

  return arr.reduce((a, b) => a * b, 1);
}
