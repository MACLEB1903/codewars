/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55685cd7ad70877c23000102/train/java


Instructions:
In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

Examples:
Kata.makeNegative(1);  // return -1
Kata.makeNegative(-5); // return -5
Kata.makeNegative(0);  // return 0

Notes:
The number can be negative already, in which case no change is required.
Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.

*/

public class Kata {  public static int makeNegative(final int x) {
    
    if (x<0){
      return x;
    }
    return x*-1;
    
  }
  
}