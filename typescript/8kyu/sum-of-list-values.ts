/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a0515f53ba33ac5e000245/train/typescript


Instructions:
Write function sumList (or sum_list) which will calculate the sum of the elements of the given list (or array in Javascript and C).

For example:

[1, 2, 3] -> 1 + 2 + 3 -> 6

*/

export function sumList(arr: number[]): number {
  return arr.reduce((a, b) => a + b, 0);
}
