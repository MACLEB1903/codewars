/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/586c1cf4b98de0399300001d/train/cpp


Instructions:
Create a combat function that takes the player's current health and the amount of damage received, 
and returns the player's new health. Health can't be less than 0.

*/

int combat(int health, int damage){
  int newHealth = health - damage;
  
 return newHealth < 0 ? 0 : newHealth;
}

