/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/train/javascript


Instructions:
In this simple Kata your task is to create a function that turns a string into a Mexican Wave. You will be passed a string and you must return that string in an array where an uppercase letter is a person standing up. 

Rules:
 1.  The input string will always be lower case but maybe empty.

 2.  If the character in the string is whitespace then pass over it as if it was an empty seat

Example:
wave("hello") => ["Hello", "hEllo", "heLlo", "helLo", "hellO"]

*/

function wave(str) {
  return [...str]
    .map((l, i) => {
      if (l == " ") return "";
      return str.slice(0, i) + l.toUpperCase() + str.slice(i + 1);
    })
    .filter(Boolean);
}
