/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/580a094553bd9ec5d800007d/train/cpp


Instructions:
Your job is simple, if x squared is more than 1000, return It's hotter than the sun!!, else, return Help yourself to a honeycomb Yorkie for the glovebox.

*/

#include <string>
#include <cmath>

using namespace std;

string apple(int x) {
  return x * x > 1000 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}
