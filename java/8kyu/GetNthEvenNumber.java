/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5933a1f8552bc2750a0000ed/train/java


Instructions:
Return the Nth Even Number

Example(Input --> Output)
1 --> 0 (the first even number is 0)
3 --> 4 (the 3rd even number is 4 (0, 2, 4))
100 --> 198
1298734 --> 2597466

The input will not be 0.

*/

public class Num {
  public static int nthEven(int n) {
    return --n + n;
  }
}