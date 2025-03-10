/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/typescript


Instructions:
Create a function (or write a script in Shell) that takes an integer
as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

*/

export const even_or_odd = (n:number):string => n % 2 === 0 ? 'Even' : 'Odd';
