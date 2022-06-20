/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/cpp


Instructions:
Given an array of integers, return a new array with each value doubled.

For example:
[1, 2, 3] --> [2, 4, 6]

*/

#include <vector>
using namespace std;

vector<int> maps(const vector<int> & values) {
  vector<int> numbers;

 for (int value : values) {numbers.push_back(value * 2);}
  return numbers;
}
