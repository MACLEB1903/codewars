/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/java


Instructions:
Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.
Example(Input --> Output):
"The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

*/

import static java.util.Arrays.stream;
public class ReverseWords{
 public static String reverseWords(String str){
     return stream(str.split(" ")).reduce((x, y) -> y + " " + x).orElse("");
 }
}