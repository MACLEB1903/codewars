/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/java


Instructions:
The first century spans from the year 1 up to *and including* the year 100, the second century - from the year 101 up to *and including* the year 200, etc.

Task:
Given a year, return the century it is in.

Examples:
1705 --> 18
1900 --> 19
1601 --> 17
2000 --> 20
2742 --> 28

if:sql
In SQL, you will be given a table years with a column yr for the year. Return a table with a column century.

Note: this kata uses strict construction as shown in the description and the examples, you can read more about it here

*/

public class Solution {
  public static int century(int number) {
    return (number + 99) / 100;
  }
}