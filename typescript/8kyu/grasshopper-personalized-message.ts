/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/typescript


Instructions:
Personalized greeting
Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

Use conditionals to return the proper message:

case	return
name equals owner	'Hello boss'
otherwise	'Hello guest'

*/

export function greet(name: string, owner: string): string {
  return name === owner ? "Hello boss" : "Hello guest";
}
