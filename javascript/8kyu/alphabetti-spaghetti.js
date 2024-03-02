/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59e72051233243fe85000039/train/javascript


Instructions:
You will be given a string of letters. The string must be returned in alphabetical order.

*/

function alphabetti(str) {
  return [...str.toLowerCase()].sort();
}
