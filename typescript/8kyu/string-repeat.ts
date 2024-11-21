/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/typescript


Instructions:
Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.

Examples (input -> output)
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"

*/

export function repeatStr(n: number, s: string): string {
  return s.repeat(n);
}
