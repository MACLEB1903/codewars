/*


Examples
Let's see some cases (input -> output):

1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]

90, 100 --> []

*/

function sumDigPow(a, b) {
  let array = [];

  for (a; a <= b; a++) {
    let total = [...String(a)].reduce(
      (sum, n, i) => (sum += Math.pow(+n, i + 1)),
      0
    );
    if (total === a) {
      array.push(a);
    }
  }
  return array;
}
