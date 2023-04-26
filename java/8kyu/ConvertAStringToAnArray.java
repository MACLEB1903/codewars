/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/java


Instructions:
Write a function to split a string and convert it into an array of words.
Examples (Input ==> Output):

"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

if:c
Words will be separated by exactly one space, without leading or trailing spaces.

There will only be letters and spaces in the input string.

*/

public class Solution {    public static String[] stringToArray(String s) {
      return s.split(" ");
    }}