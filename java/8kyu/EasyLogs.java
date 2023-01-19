/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b68c7029756802aa2000176/train/java


Instructions:
Given a logarithm base X and two values A and B, return a sum of logratihms with the base X:  $ \log_XA + \log_XB $.

*/

public class EasyLogs {
  public static double logs(double x, double a, double b) {
    return Math.log(a * b) / Math.log(x);
  }
}