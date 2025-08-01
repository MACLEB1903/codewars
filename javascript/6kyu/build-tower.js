/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/javascript


Instructions:
Build Tower
Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ", 
  "*****"
]
And a tower with 6 floors looks like this:

[
  "     *     ", 
  "    ***    ", 
  "   *****   ", 
  "  *******  ", 
  " ********* ", 
  "***********"
]

*/

function towerBuilder(nFloors) {
  const arr = [];
  for (let i = 1; i <= nFloors; i++) {
    arr.push(
      " ".repeat(nFloors - i) + "*".repeat(2 * i - 1) + " ".repeat(nFloors - i)
    );
  }
  return arr;
}
