/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp


Instructions: 
Write function bmi that calculates body mass index (bmi = weight / height2).
if bmi <= 18.5 return "Underweight"
if bmi <= 25.0 return "Normal"
if bmi <= 30.0 return "Overweight"
if bmi > 30 return "Obese"
    
*/

using namespace std;

string bmi(double w, double h) {
  float bmi = w / (h * h);
  if (bmi <= 18.5) {
    return "Underweight";
  }
  if (bmi <= 25) {
    return "Normal";
  }
  if (bmi <= 30) {
    return "Overweight";
  }
  return "Obese";
}
