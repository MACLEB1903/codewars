/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5728fd7ea1f69f234c00000a/train/typescript


Instructions:
Create a function that returns if the variable is an array, i.e.

isArray([]) => true
isArray({}) => false
isArray('lero') => false
isArray('') => false
isArray([0]) => true

*/

export function isArray(value: number): boolean {
  return Array.isArray(value);
}
