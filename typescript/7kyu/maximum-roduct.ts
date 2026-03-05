/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/typescript


Instructions:
Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array. Note that the array size is at least 2 and consists a mixture of positive, negative integers and also zeroes.

*/


export function adjacentElementsProduct(arr: number[]): number {
  return Math.max(...Array.from({length: arr.length-1 }, (_,i) => arr[i]*arr[i+1]))
}

export function adjacentElementsProduct(arr: number[]): number {
  return Math.max(...[...Array(arr.length-1)].map((_,i) => arr[i]*arr[i+1]))
}