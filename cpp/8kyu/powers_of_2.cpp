/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/cpp

Instructions:     
Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).
    
*/

#include <vector>
#include <cstdint>
#include <math.h>
using namespace std;

vector<uint64_t> powers_of_two(int n) {
  vector<uint64_t> result = {};
  
  for (int i = 0; i <= n; i++) {
    result.push_back(pow(2, i));
  }
  
  return result;
}
