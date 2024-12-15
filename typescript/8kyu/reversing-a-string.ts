/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/562e8a47ded765e36a00006b/train/typescript


Instructions:
Create a function that will reverse a string.
You might have to convert the string into an array first before you are able to reverse it.
Your final answer must also be a string.
Some functions you might find useful to solve this problem are: String.split() Array.reverse() Array.join()

*/

export function reverseString(str: string): string {
  return [...str].reverse().join("");
}
