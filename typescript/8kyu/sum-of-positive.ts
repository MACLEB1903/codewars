/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5715eaedb436cf5606000381/train/typescript


Instructions:
You get an array of numbers, return the sum of all of the positives ones.
Example [1,-4,7,12] => 1 + 7 + 12 = 20
Note: if there is nothing to sum, the sum is default to 0.

*/

export function positiveSum(arr: number[]): number {
  return arr.reduce((sum, n) => (n > 0 ? sum + n : sum), 0);
}

