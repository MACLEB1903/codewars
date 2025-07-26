/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/typescript


Instructions:
When provided with a number between 0-9, return it in words. Note that the input is guaranteed to be within the range of 0-9.

Input: 1
Output: "One".

If your language supports it, try using a switch statement.

*/

export function switchItUp(intNumber: number): string {
  const NUMBERS_STRING = [
    "Zero",
    "One",
    "Two",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
  ];
  return NUMBERS_STRING[intNumber];
}
