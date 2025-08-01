/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/526571aae218b8ee490006f4/train/javascript


Instructions:
Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

*/

var countBits = function (n) {
  return n.toString(2).split(1).length - 1;
};

var countBits = function (n) {
  return n.toString(2).replace(/0/g, "").length;
};
