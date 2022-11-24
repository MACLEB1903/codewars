/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/56b29582461215098d00000f/train/cpp


Instructions: 
Issue
Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.
The pipes connecting your level's stages together need to be fixed before you receive any more complaints.
The pipes are correct when each pipe after the first is 1 more than the previous one.

Task:
Given a list of unique numbers sorted in ascending order, return a new list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).

Example:
Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8

*/

#include <vector>
#include <algorithm>
using namespace std;

vector<int> pipe_fix(const vector<int>& nums) {
  int min = *min_element(nums.begin(), nums.end());
  int max = *max_element(nums.begin(), nums.end());
  
  vector<int> result;
  
  for (int i = min; i <= max; i++) {
    result.push_back(i);
  }
  
  return result;
}
