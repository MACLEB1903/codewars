/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58d93a93091c1143e80000e9/train/javascript


Instructions:
Create a function that calculates the mean of a series of numbers (to 2 decimal places if result isn't whole number). Series may include one or more numbers.

*/

function calculateMean() {
  return (
    ([...arguments].reduce((a, b) => a + b, 0) / arguments.length).toFixed(2) *
    1
  );
}
