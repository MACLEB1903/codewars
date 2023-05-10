/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/563b74ddd19a3ad462000054/train/java


Instructions:
write me a function stringy that takes a size and returns a string of alternating 1s and 0s.
the string should start with a 1.
a string with size 6 should return :'101010'.
with size 4 should return : '1010'.
with size 12 should return : '101010101010'.

The size will always be positive and will only use whole numbers.

*/

public class Kata {
  public static String stringy(int size) {
    StringBuilder builder = new StringBuilder();
    for (int i = 0; i < size; i++){
    if (i % 2 ==0) { 
      builder.append(1); 
    } else {
      builder.append(0); 
    }
    }
    return builder.toString();
  }
}