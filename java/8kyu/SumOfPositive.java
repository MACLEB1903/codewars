/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5715eaedb436cf5606000381/train/java


Instructions:
Task

You get an array of numbers, return the sum of all of the positives ones.
Example 
[1, -4, 7, 12] => $ 1 + 7 + 12 = 20 $

Note:
If there is nothing to sum, the sum is default to 0.

*/

public class Positive{  public static int sum(int[] arr){
    int sum = 0;
    for(int curr : arr){
      if(curr > 0){
        sum = sum + curr;
      }
    }
      return sum;
  }
}