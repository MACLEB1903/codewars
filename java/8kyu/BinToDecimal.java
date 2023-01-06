/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a5c31ce298a7e6b7000334/train/java


Instructions:
Complete the function which converts a binary number (given as a string) to a decimal number.

*/

public class Converter{
  public static int binToDecimal(String inp){
    return Integer.parseInt(inp, 2);
  }
}