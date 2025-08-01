/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53844152aa6fc137d8000589/train/javascript


Instructions:
Given an input n, write a function always that returns a function which returns n. Ruby should return a lambda or a proc.

var three = always(3);
three(); // returns 3

*/

function always(n) {
  return function () {
    return n;
  };
}
