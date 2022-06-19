/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp


Instructions:
Task
You get an array of numbers, return the sum of all of the positives ones.

Example:
[1, -4, 7, 12] => 1+7+12=20

Note:
If there is nothing to sum, the sum is default to 0.

*/

#include <vector>
using namespace std;

int positive_sum (const vector<int> arr){
  int sum = 0;
  for (int num : arr) {
    sum += num > 0 ? num : 0;
  }
  
  return sum;
}