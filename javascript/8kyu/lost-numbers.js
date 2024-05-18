/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54ff35b677602d7dfe000f4a/train/javascript


Instructions:
Write a function that determines whether a given number is part of an array of lost numbers. If it is a lost number have the function return true and if it is not then return false.

Note: This kata is inspired by the first coding problem I ever solved on Codecademy. Surprisingly I couldn't find it on Codewars so now its here for everyone. If you can't solve the problem then work through this tutorial http://www.codecademy.com/courses/functions-in-javascript-2-0/0/1?curriculum_id=4f4bdd96848740000300026a

*/

const lost = [4, 8, 15, 16, 23, 42];
const isLost = (n) => lost.includes(n);
