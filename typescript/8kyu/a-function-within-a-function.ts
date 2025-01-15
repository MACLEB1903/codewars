/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53844152aa6fc137d8000589/train/typescript


Instructions:
Given an input n, write a function always that returns a function which returns n. Ruby should return a lambda or a proc.

var three?: any = always(3);
three(); // returns 3

*/

export function always(n: number): () => number {
  return function () {
    return n;
  };
}
