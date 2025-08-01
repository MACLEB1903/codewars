/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56b1f01c247c01db92000076/train/java


Instructions:
Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
"String"      -> "SSttrriinngg"
"Hello World" -> "HHeelllloo  WWoorrlldd"
"1234!_ "     -> "11223344!!__  "

Good Luck!

*/

public class Solution{
  public static String doubleChar(String s){
    return s.replaceAll(".", "$0$0");
  }
}