/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/java


Instructions:
Let $P$ represent a prime number. 
Then, math\displaystyle\frac{(P-1)! + 1}{P * P} should give a whole number, where $P!$ is the factorial of $P$.

Your task is to create a function that returns true if the given number is a Wilson prime and false otherwise.

*/

public class WilsonPrime {
	public static boolean am_i_wilson(double n) {
    return n == 5 || n == 13 || n == 563;
  }
}