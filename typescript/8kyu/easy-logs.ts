/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b68c7029756802aa2000176/train/typescript


Instructions:
Add two logs with base X, with the value of A and B. Example log A + log B where the base is X.

*/

export function logs(x: number, a: number, b: number): number {
  return Math.log(a * b) / Math.log(x);
}
