/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp


Instructions: 
You're writing code to control your town's traffic lights. You need a function to handle each change from green, to yellow, to red, and then to green again.
Complete the function that takes a string as an argument representing the current state of the light and returns a string representing the state the light should change to.

For example, when the input is green, output should be yellow.

Notes:
The input will always be valid.
The light will change to the next state in the order specified above.
The input will always be in the current state.
The input will always be a string.
The input will always be a string.
 
*/

#include <string>
using namespace std;

string update_light(string current) {
  map<string, string> lights = {
    {"green", "yellow"}, {"yellow", "red"}, {"red", "green"}
  };
  
  return lights[current];
}
