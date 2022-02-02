/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/cpp


Instructions: 
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

For example:
(Input -> Output):
2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
    
*/

int summation(int num) {
   return num * (num + 1) / 2;
}
