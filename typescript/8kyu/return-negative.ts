/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55685cd7ad70877c23000102/train/typescript


Instructions:
In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

Examples:
makeNegative(1);    // return -1
makeNegative(-5);   // return -5
makeNegative(0);    // return 0
makeNegative(0.12); // return -0.12

*/

export function makeNegative(num: number) {
  return -Math.abs(num);
}
