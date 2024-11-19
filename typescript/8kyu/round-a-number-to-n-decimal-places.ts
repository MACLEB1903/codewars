/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/554e132f19c57a2771000030/train/typescript


Instructions:
Create a function that rounds a number n to p decimal places and returns it as a string.

For example:
Round(1.56881,4)==>"1.5688"
Round(0.3333,2)==> "0.33"

*/

export function Round(n: number, p: number): string {
  return n.toFixed(p);
}
