/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5769b3802ae6f8e4890009d2/train/typescript


Instructions:
Take an array and remove every second element from the array. Always keep the first element and start removing with the next element.

Example:
["Keep", "Remove", "Keep", "Remove", "Keep", ...] --> ["Keep", "Keep", "Keep", ...]

None of the arrays will be empty, so you don't have to worry about that!

*/

export function removeEveryOther(arr: any[]) {
  return arr.filter((_, i) => (i + 1) % 2 === 1);
}
