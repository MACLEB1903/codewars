/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/java


Instructions:
Write a program which accepts a single byte n and then a sequence of bytes string and outputs the string exactly n times.
The first input byte will be n. Following bytes will be characters of string. The end of the input string will be indicated with a null byte \0.

Examples:
"\6I" -> "IIIIII"
"\5Hello" -> "HelloHelloHelloHelloHello"

Write a function that accepts a non-negative integer n and a string s as parameters, and returns a string of s repeated exactly n times.

Examples (input -> output):
6, "I"     -> "IIIIII"
5, "Hello" -> "HelloHelloHelloHelloHello"

*/

public class Solution {
    public static String repeatStr(final int repeat, final String string) {
      String merged = "";  
      for(int i = 1; i<=repeat; i++){
          merged = merged + string;
        }
      return merged;
    }
}