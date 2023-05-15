/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57d814e4950d8489720008db/train/java


Instructions:
Removed due to copyright infringement.
This kata is from check py.checkio.org
You are given an array with positive numbers and a non-negative number N. You should find the N-th power of the element in the array with the index N. If N is outside of the array, then return -1. Don't forget that the first element has the index 0.
Let's look at a few examples:

if-not:factor
array = [1, 2, 3, 4] and N = 2, then the result is 3^2 == 9;
array = [1, 2, 3] and N = 3, but N is outside of the array, so the result is -1.

if:factor
{ 1 2 3 4 } :> array and 2 :> n, then the result is 3 2 ^ -> 9;
{ 1 2 3 } :> array and 3 :> n, but N is outside of the array, so the result is -1.

->

*/

public class Kata {
  public static int nthPower(int[] array, int n) {
    if(array.length > n){
      return (int)Math.pow(array[n], n);
    }
    return -1;
  }
}