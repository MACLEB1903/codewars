/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/cpp


Instructions: 
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.
invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
invert([]) == []
OR
    
*/


#include <vector>
using namespace std;

vector<int> invert(vector<int> values){
    vector<int> result;
  
   for (int value : values) {
    result.push_back(-value);
   }
  
   return result;
}
