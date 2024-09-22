/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/559ac78160f0be07c200005a/train/typescript


Instructions:
Write a function that returns a string in which firstname is swapped with last name.
nameShuffler('john McClane'); => "McClane john"

*/

export function nameShuffler(str: string): string {
  return str.split(" ").reverse().join(" ");
}
