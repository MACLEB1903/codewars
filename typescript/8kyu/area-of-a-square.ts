/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5748838ce2fab90b86001b1a/train/typescript


Instructions:
Write the function squareArea(A) (square_area($A) in PHP) that finds the area of the red square when you have the length of the circular arc A.

Use π = Math.PI (M_PI in PHP)
Round to two decimals.

*/

function squareArea(A: number): number {
  return Number(Math.pow((2 * A) / 3.1416, 2).toFixed(2));
}
