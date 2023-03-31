/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5808e2006b65bff35500008f/train/java


Instructions:
When provided with a letter, return its position in the alphabet.

Input :: "a"

Output :: "Position of alphabet: 1"
Note: Only lowercased English letters are tested

*/

public class Kata {
  public static String position(char alphabet) {
    return "Position of alphabet: " + (alphabet - 96);
  }
}