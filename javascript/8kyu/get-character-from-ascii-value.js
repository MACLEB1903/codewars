/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55ad04714f0b468e8200001c/train/javascript


Instructions:
Get character from ASCII Value

Write a function getChar/GetChar/get_char which takes a number and returns the corresponding ASCII char for that value.

Example:
getChar(65) # => 'A'
For ASCII table, you can refer to http://www.asciitable.com/

*/

function getChar(c) {
  return String.fromCharCode(c);
}
