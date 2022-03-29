/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/cpp


Instructions:
I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.
P.S. Each array includes only integer numbers. Output is a number too.

*/

#include <vector>
#include <numeric>
using namespace std;

int arrayPlusArray(vector<int> a, vector<int> b) {
  return accumulate(a.begin(), a.end(),0) + accumulate(b.begin(), b.end(),0);
}