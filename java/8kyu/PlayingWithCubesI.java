/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55c0a79e20be94c91400014b/train/java


Instructions:
Create a public class called <b>Cube</b> ___without___ a constructor which gets one single private integer variable <b>Side</b>, a getter <b>GetSide()</b> and a setter <b>SetSide(int num)</b> method for this property. Actually, getter and setter methods are not the common way to write this code in C#. In the next kata of this series, we gonna refactor the code and make it a bit more professional...

Notes:
There's no need to check for negative values!
initialise the side to 0.

*/

public class Cube{  private int side;
  
  public int getSide(){
    return this.side;
  }
  
  public void setSide(int newSide){
    this.side = newSide;
  }
}