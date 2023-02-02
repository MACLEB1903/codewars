/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/java


Instructions:
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
Example (Input => Output):

35231 => [1,3,2,5,3]
0     => [0]

*/

public class Kata {
  public static int[] digitize(long n) {
    return new StringBuilder(String.valueOf(n))
        .reverse()
        .chars()
        .map(Character::getNumericValue)
        .toArray();
  }
}