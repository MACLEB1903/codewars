/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5786f8404c4709148f0006bf/train/cpp


Instructions:
For a pole vaulter, it is very important to begin the approach run at the best possible starting mark. This is affected by numerous factors and requires fine-tuning in practice. But there is a guideline that will help a beginning vaulter start at approximately the right location for the so-called "three-step approach," based on the vaulter's body height.
This guideline was taught to me in feet and inches, but due to the international nature of Codewars, I am creating this kata to use metric units instead;.
You are given the following two guidelines to begin with: (1) A vaulter with a height of 1.52 meters should start at 9.45 meters on the runway. (2) A vaulter with a height of 1.83 meters should start at 10.67 meters on the runway.
You will receive a vaulter's height in meters (which will always lie in a range between a minimum of 1.22 meters and a maximum of 2.13 meters). Your job is to return the best starting mark in meters, rounded to two decimal places.
Hint: Based o

*/

#include <cmath>
using namespace std;

double startingMark(double bodyHeight){
    double m = 122.0 / 31.0;
    double b = 9.45 - m * 1.52;
    double result = m * bodyHeight + b;
    return round(result * 100.0) / 100.0;
}
