/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/java


Instructions:
Complete the solution so that it reverses the string passed into it. 
'world'  =>  'dlrow'
'word'   =>  'drow'

*/

public class Kata {
  public static String solution(String str) {
    String reversed = "";
    for (int i=0; i<str.length(); i++){
        reversed = str.charAt(i)+reversed;
      }
    return reversed;
  }
}