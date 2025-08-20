/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08/train/typescript


Instructions:
Your task, is to create N×N multiplication table, of size provided in parameter.

For example, when given size is 3
1 2 3
2 4 6
3 6 9

For the given example, the return value should be:

[[1,2,3],[2,4,6],[3,6,9]]

*/

export function multiplicationTable (size: number) : number[][]{
 return [...Array(size)].map((_,num) => [...Array(size)].map((_,i) => (i+1) * (num+1)))
}