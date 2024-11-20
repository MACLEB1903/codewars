/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53da6d8d112bd1a0dc00008b/train/typescript


Instructions:
In this kata you will create a function that takes in a list and returns a list with the reverse order.

Examples
reverseList([1,2,3,4]) == [4,3,2,1]
reverseList([3,1,5,4]) == [4,5,1,3]

*/

export function reverseList(list: number[]): number[] {
  return list.reverse();
}
