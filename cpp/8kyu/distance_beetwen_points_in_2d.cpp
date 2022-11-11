/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903
 
Source: 
https://www.codewars.com/kata/58dced7b702b805b200000be/train/cpp

Instructions: 
This series of katas will introduce you to basics of doing geometry with computers.
Point objects have x and y attributes (X and Y in C#) attributes.
Write a function calculating distance between Point a and Point b.
Tests round answers to 6 decimal places.
    
*/

#include <cmath>
using namespace std;

double distance_between_two_points(const Point& a, const Point& b) {
   return hypot(a.x - b.x, a.y - b.y);
}
