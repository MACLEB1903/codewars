/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/typescript


Instructions:
Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.

Example:
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6
Input validation
If an empty value ( null, None, Nothing, nil etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

*/

export function sumArray(array: number[] | null): number {
  if (array) {
    return array?.length > 1
      ? array
          .sort((a, b) => a - b)
          .slice(1, -1)
          .reduce((sum, n) => (sum += n), 0)
      : 0;
  }
  return 0;
}
