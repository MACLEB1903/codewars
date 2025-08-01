/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/cpp


Instructions:
In this Kata we are passing a number (n) into a function.
Your code will determine if the number passed is even (or not).
The function needs to return either a true or false.
Numbers may be positive or negative, integers or floats.
Floats are considered UNeven for this kata.

*/

#include <cmath>
bool is_even(double n){ return fmod(n,2.0) == 0.0;}