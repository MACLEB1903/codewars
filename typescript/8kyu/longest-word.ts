/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59e2877fe155cf834a00019e/train/typescript


Instructions:
write a function that returns the longest word in a sentence :)

*/

export function theLongest(text: string): string {
  return text.split(" ").sort((a, b) => b.length - a.length)[0];
}
