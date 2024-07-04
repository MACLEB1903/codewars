/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a37f3cbb99449513000cd8/train/javascript


Instructions:
Write a function which removes from string all non-digit characters and parse the remaining to number. E.g: "hell5o wor6ld" -> 56

Function:

####javascript

getNumberFromString(s)
####ruby

get_number_from_string(s)
####CSharp

GetNumberFromString(string s)

*/

function getNumberFromString(s) {
  return Number(s.match(/\d/g).join(""));
}
