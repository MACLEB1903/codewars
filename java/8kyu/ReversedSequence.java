/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/java


Instructions:
Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]

Write your result to arr. You may assume it is large enough to hold the result. You do not need to return anything.


*/

public class Sequence{
  public static int[] reverse(int n){
    int[] result = new int[n];
    for(int i=n;i>0;i--){
      result[n-i] = i;
    }
    return result;
  }
}