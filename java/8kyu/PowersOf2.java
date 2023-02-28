/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/java


Instructions:
Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).

*/

public class Kata {
  
  public static long[] powersOfTwo(int n) {
    long ret[] = new long[n + 1];
    for (int i = 0; i <= n; i++) ret[i] = 1L << i;
    return ret;
  }}