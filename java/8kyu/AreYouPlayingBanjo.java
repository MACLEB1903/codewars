/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53af2b8861023f1d88000832/train/java


Instructions:
Create a function which answers the question "Are you playing banjo?".  
If your name starts with the letter "R" or lower case "r", you are playing banjo!

The function takes a name as its only argument, and returns one of the following strings:
name + " plays banjo" 
name + " does not play banjo"
Names given are always valid strings.

*/

public class Banjo {
  static String areYouPlayingBanjo(String name) {
    return name + (name.matches("^[Rr].*$") ? " plays banjo" : " does not play banjo");
  }
}