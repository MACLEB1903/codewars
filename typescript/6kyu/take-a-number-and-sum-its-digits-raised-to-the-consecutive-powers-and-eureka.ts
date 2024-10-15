/*

Examples
Let's see some cases (input -> output):

1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]

90, 100 --> []

*/

export function sumDigPow(a: number, b: number) {
  let array: number[] = [];

  for (a; a <= b; a++) {
    let total = String(a)
      .split("")
      .reduce((sum, n, i) => (sum += Math.pow(Number(n), i + 1)), 0);
    if (total === a) {
      array.push(a);
    }
  }
  return array;
}
