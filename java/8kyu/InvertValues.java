/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/java


Instructions:
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

[1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
[1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
[] --> []

The input array is arr which contains size elements. Mutate the array in-place according to the above specification. You do not need to return anything.


*/

public class Kata {
  public static int[] invert(int[] array) {
  for(int i=0; i<array.length; i++){
    array[i] = array[i]*-1;
  }
  return array;
  }
}