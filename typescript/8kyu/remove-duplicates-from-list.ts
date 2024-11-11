/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a5b0dfcf1fa526bb000118/train/typescript


Instructions:
Define a function that removes duplicates from an array of numbers and returns it as a result.

The order of the sequence has to stay the same.

*/

export function distinct(a: number[]): number[] {
  return [...new Set(a)];
}
