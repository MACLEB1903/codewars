/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/typescript


Instructions:
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

[1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
[1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
[] --> []
 
You can assume that all values are integers. Do not mutate the input array.

*/

export function invert(array: number[]): number[] {
  return array.map((n) => -n);
}
