/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp


Instructions: 
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
    
*/

#include <vector>
using namespace std;
 
int grow(vector<int> nums) {
  int reduced_num = 1;
   
  for(int num : nums){
    reduced_num *=num;
    }
  return reduced_num;
}