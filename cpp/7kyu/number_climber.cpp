/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/559760bae64c31556c00006b/train/cpp


Instructions:
For every positive integer N, there exists a unique sequence starting with 1 and ending with N and such that every number in the sequence is either the double of the preceeding number or the double plus 1. 

For example, given N = 13, the sequence is [1, 3, 6, 13], because . . . :
3 =  2*1 +1
6 =  2*3
13 = 2*6 +1

Write a function that returns this sequence given a number N. Try generating the elements of the resulting list in ascending order, i.e., without resorting to a list reversal or prependig the elements to a list.

*/

#include <cmath>
#include <algorithm>
using namespace std;

vector<int> climb(int n){
  vector<int> result;
  
  while (n > 0)
  {
    result.push_back(n);
    n = floor(n / 2);
  }
  
  reverse(result.begin(), result.end());
  
  return result;
}
