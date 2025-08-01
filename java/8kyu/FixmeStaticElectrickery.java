/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/596c55fc7bd5476bf60000d5/train/java


Instructions:
The code provided has a method plus100 which is supposed to return the number of the parameter incremented by 100.

But it's not working properly.

Task:
Fix the code so we can all go home early.

Restrictions:
Do not modify the constructor
Do not modify the plus100 method
Do not modify the ONE_HUNDRED declaration

*/

public class Dinglemouse {  private static int ONE_HUNDRED = 100;
  
  public static final Dinglemouse INST = new Dinglemouse();  private final int value;   private Dinglemouse() {
    value = ONE_HUNDRED;
  }
  
  public int plus100(int n) {
    return value + n;
  }
  
}