/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/java


Instructions:
I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.

*/

public class Sum {  public static int arrayPlusArray(int[] arr1, int[] arr2) {
    int sum = 0;
    for(int num : arr1){
      sum+=num;
    }
    for(int num : arr2){
      sum+=num;
    }
    return sum;
  }}