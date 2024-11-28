/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56895d1636919c5609000059/train/typescript


Instructions:
Jon has a string but there are commas (,) where there should be spaces (' ').

Your task is to help Jon replace the commas with spaces.

*/

export function commaReplacer(str: string): string{
  return str.replace(/,/g, " ");
}
