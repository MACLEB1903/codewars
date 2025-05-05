/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5968644eea5c541501000110/train/typescript


Instructions:
Given an argument that may be a String or a Number, return a simple greeting.

Example:
hello('Noclip') => 'Hello Noclip'
hello(13) => 'Hello 13'
hello('there') => 'Hello there'

*/

function hello(name: string | number): string {
  return `Hello ${name}`;
}
