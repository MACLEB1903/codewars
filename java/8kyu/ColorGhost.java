/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53f1015fa9fe02cbda00111a/train/java


Instructions:
Color Ghost
Create a class Ghost
Ghost objects are instantiated without any arguments.
Ghost objects are given a random color attribute of "white" or "yellow" or "purple" or "red" when instantiated

javascript
ghost = new Ghost();
ghost.color //=> "white" or "yellow" or "purple" or "red"

coffeescript
ghost = new Ghost()
ghost.color #=> "white" or "yellow" or "purple" or "red"

ruby
ghost = Ghost.new
ghost.color  #=> "white" or "yellow" or "purple" or "red"

python
ghost = Ghost()
ghost.color  #=> "white" or "yellow" or "purple" or "red"

rust
let ghost = Ghost::new();
ghost.color; // => "white" or "yellow" or "purple" or "red"

java
Ghost ghost = new Ghost();
ghost.getColor(); //=> "white" or "yellow" or "purple" or "red"

c#
Ghost ghost = new Gost();
ghost.GetColor(); // => "white" or "yellow" or "purple" or "red"

*/

public class Ghost {
  private final String[] colors = {"white", "yellow", "purple", "red"}; 
  
  public Ghost() {
  }
  
  public String getColor() {
    return colors[(int)(Math.random() * colors.length)];
  }
}