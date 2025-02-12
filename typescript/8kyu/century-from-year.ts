/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/typescript


Instructions:
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

Task:
Given a year, return the century it is in.

Examples:
1705 --> 18
1900 --> 19
1601 --> 17
2000 --> 20
2742 --> 28
Note: this kata uses strict construction as shown in the  and the examples, you can read more about it here

*/

export function century(year: number): number {
  return Math.ceil(year / 100);
}
