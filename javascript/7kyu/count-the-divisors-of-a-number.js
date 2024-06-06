/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/javascript


Instructions:
Count the number of divisors of a positive integer n.

Random tests go up to n = 500000, but fixed tests go higher.

Examples (input --> output)
4 --> 3 // we have 3 divisors - 1, 2 and 4
5 --> 2 // we have 2 divisors - 1 and 5
12 --> 6 // we have 6 divisors - 1, 2, 3, 4, 6 and 12
30 --> 8 // we have 8 divisors - 1, 2, 3, 5, 6, 10, 15 and 30

*/

function getDivisorsCnt(num) {
  if (num < 1) return 0;

  let count = 0;
  let sqrt = Math.sqrt(num);

  for (let i = 1; i <= sqrt; i++) {
    if (num % i === 0) {
      count += i === num / i ? 1 : 2;
    }
  }

  return count;
}
