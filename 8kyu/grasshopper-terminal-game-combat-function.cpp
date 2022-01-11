/*

Create a combat function that takes the player's current health and the amount of damage received, 
and returns the player's new health. Health can't be less than 0.

*/

int combat(int health, int damage){
  int newHealth = health - damage;
  
 return newHealth < 0 ? 0 : newHealth;
}

