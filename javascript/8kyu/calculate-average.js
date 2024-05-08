/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/javascript


Instructions:
Write function avg which calculates average of numbers in given list.

*/

function find_average(array) {
  return array.reduce((result, current) => result + current, 0) / array.length;
}
