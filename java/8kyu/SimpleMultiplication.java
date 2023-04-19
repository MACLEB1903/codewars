/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/583710ccaa6717322c000105/train/java


Instructions:
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

*/

public class Sid {
    public static int simpleMultiplication(int n) {
        if(n%2==0)
          return n*8;
        return n*9;
    }
}