/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/544675c6f971f7399a000e79/train/javascript


Instructions:
Note: This kata is inspired by Convert a Number to a String!. Try that one too.

We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

Examples
stringToNumber("1234") == 1234
stringToNumber("605" ) == 605
stringToNumber("1405") == 1405
stringToNumber("-7"  ) == -7

*/

var stringToNumber = function (str) {
  return parseInt(str);
};
