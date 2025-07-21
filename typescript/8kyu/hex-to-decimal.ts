/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a4d500e298a7952100035d/train/typescript


Instructions:
Complete the function which converts hex number (given as a string) to a decimal number.

*/

export function hexToDec(hexString: string): number {
  return parseInt(hexString, 16);
}
