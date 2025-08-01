/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a805d8cafa10f8b930005ba/train/java


Instructions:
Your task is to find the nearest square number of a positive integer n. In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.
For example, if n = 111, then the nearest square number equals 121, since 111 is closer to 121, the square of 11, than 100, the square of 10.
If n is already a perfect square (e.g. n = 144, n = 81,  etc.), you need to just return n.

Good luck :)

*/

public class CodeWarsMath {
  public static int nearestSq(final int n){
    return (int) Math.pow(Math.round(Math.sqrt(n)), 2);
  }
}