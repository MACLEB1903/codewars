/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57eaeb9578748ff92a000009/train/typescript


Instructions:
Given an array of integers as strings and numbers, return the sum of the array values as if all were numbers.
Return your answer as a number.

*/

export function sumMix(x: any[]): number {
    return x.reduce((a, c) => a + +c, 0);
}

