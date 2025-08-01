/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59fca81a5712f9fa4700159a/train/java


Instructions:
Given a non-negative integer b, write a function which returns an integer d such that the *binary* representation of b is the same as the *decimal* representation of d.

Examples:
n = 1 should return 1
n = 5 should return 101
n = 11 should return 1011

*/

public class Kata {  public static int toBinary(int n) {
    return Integer.parseInt(Integer.toBinaryString(n));
  }}