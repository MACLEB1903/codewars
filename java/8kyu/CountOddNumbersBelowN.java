/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59342039eb450e39970000a6/train/java


Instructions:
Given a number n, return the number of positive odd numbers below n, EASY!

Examples (Input -> Output):
7  -> 3 (because odd numbers below 7 are [1, 3, 5])
15 -> 7 (because odd numbers below 15 are [1, 3, 5, 7, 9, 11, 13])

Expect large Inputs!
Input 5 means the input will be a character with ASCII code 5, not the character '5'. Output similarly. The valid input range is 0 <= input <= 255. You will never have to read more than one byte.


*/

public class Kata {
  public static int oddCount(int n){
    return n/2;
  }
}