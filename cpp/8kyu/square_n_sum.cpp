/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp


Instructions:
Complete the square sum function so that it squares each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.

*/

#include <vector>
using namespace std;

int square_sum(const vector<int>& numbers){
  int square = 0;
  
  for (int num: numbers) {
    square += num * num;
  }
  
  return square;
}