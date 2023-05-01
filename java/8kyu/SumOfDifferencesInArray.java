/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/java


Instructions:
Your task is to sum the differences between consecutive pairs in the array in descending order.
Example

[2, 1, 10]  -->  9

In descending order: [10, 2, 1]
Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).
*/

import java.util.Arrays;public class ZywOo {
  public static int sumOfDifferences(int[] arr) {
    Arrays.sort(arr);
		return arr.length <= 1 ? 0 : arr[arr.length-1] - arr[0];
  }
}