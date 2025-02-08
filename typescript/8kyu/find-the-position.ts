/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5808e2006b65bff35500008f/train/typescript


Instructions:
When provided with a letter, return its position in the alphabet.

Input :: "a"
Output :: "Position of alphabet: 1"

*/

export function position(alphabet: string): string {
  return `Position of alphabet: ${alphabet.charCodeAt(0) - 96}`;
}

