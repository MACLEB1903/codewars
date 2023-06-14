/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/567bf4f7ee34510f69000032/train/java


Instructions:
Implement String#digit? (in Java StringUtils.isDigit(String)), which should return true if given object is a single digit (0-9), false otherwise.

*/

public class StringUtils {
  public static boolean isDigit(String s) {
    return s.matches("\\d");
  }
}