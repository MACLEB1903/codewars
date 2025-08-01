/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/589e4d646642d144a90000d8/train/cpp


Instructions:
Create a function running_average() that returns a callable function object. Update the series with each given value and calculate the current average.

    r_avg = running_average()
    r_avg(10) = 10.0
    r_avg(11) = 10.5
    r_avg(12) = 11
    
All input values are valid. Round to two decimal places.

This Kata is based on a example from Fluent Python book.
Javascript // Lua // C++:

Create a function runningAverage() that returns a callable function object. Update the series with each given value and calculate the current average.

    rAvg = runningAverage();
    rAvg(10) = 10.0;
    rAvg(11) = 10.5;
    rAvg(12) = 11;

*/

#include <cmath>
using namespace std;

auto runningAverage() {
  return [sumOfElements = 0.0, numberOfElements = 0] (auto number) mutable {
    return round((sumOfElements += number) / ++numberOfElements * 100) / 100;
  };
}
