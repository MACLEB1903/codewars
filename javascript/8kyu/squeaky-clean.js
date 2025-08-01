/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53a8beaca9198e77b9000309/train/javascript


Instructions:
Write a solution to cleanup arrays. This can exist entirely in the squeakyClean function or contain multiple helper functions.

Your squeakyClean function should accept an input array of values and return a new array with all empty strings, 0, null and undefined removed.

Example:
var originalArray = ['click1','click2',null,'','','submitForm'];
the solution you write should return this:

var cleanedArray = ['click1', 'click2','submitForm']

*/

function squeakyClean(arr) {
  return arr.filter((v) => !!v);
}
