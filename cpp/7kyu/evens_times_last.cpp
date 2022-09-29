/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a1a9e5032b8b98477000004/train/cpp


Instructions:
Given a sequence of integers, return the sum of all the integers that have an even index (odd index in COBOL), multiplied by the integer at the last index. 

Indices in sequence start from 0.
If the sequence is empty, you should return 0.

*/

#include <vector>
using namespace std;

int even_last(vector<int> nums){
  int size = nums.size();
  
  if (size == 0)
    return 0;
  
  int result = 0;
  int lastNumber = nums[size - 1];
    
  for (int i = 0; i < size; i += 2)
  {
      result += nums[i] * lastNumber;
  }
  
  return result;
}
