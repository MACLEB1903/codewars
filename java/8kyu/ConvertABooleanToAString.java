/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/java


Instructions:
Implement a function which convert the given boolean value into its string representation.
Note: Only valid inputs will be given.

if:c
In C, do not allocate memory, return a string literal.

*/

public class BooleanToString {
  public static String convert(boolean b){
    if(b) {
      return "true";
    } else {
      return "false";
    }
  }
}