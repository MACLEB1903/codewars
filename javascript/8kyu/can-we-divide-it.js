/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a2b703dc5e2845c0900005a/train/javascript


Instructions:
Your task is to create functionisDivideBy (or is_divide_by) to check if an integer number is divisible by each out of two arguments.

A few cases:


(-12, 2, -6)  ->  true
(-12, 2, -5)  ->  false

(45, 1, 6)    ->  false
(45, 5, 15)   ->  true

(4, 1, 4)     ->  true
(15, -5, 3)   ->  true

*/

const isDivideBy = (number, a, b) => number % a === 0 && number % b === 0;
