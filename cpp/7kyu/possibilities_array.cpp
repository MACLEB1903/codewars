/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59b710ed70a3b7dd8f000027/train/cpp


Instructions:
A non-empty array a of length n is called an array of all possibilities if it contains all numbers between 0 and a.length - 1 (both inclusive).

Write a function that accepts an integer array and returns true 
if the array is an array of all possibilities, else false.

Example:
python
[1,2,0,3] => True
Includes all numbers between 0 and a.length - 1 (4 - 1 = 3)

[0,1,2,2,3] => False
Doesn't include all numbers between 0 and a.length - 1 (5 - 1 = 4)

[0] => True
Includes all numbers between 0 and a.length - 1 (1 - 1 = 0).

*/

#include <vector>
#include <algorithm>
using namespace std;

bool isAllPossibilities(vector<int> arr){
  if (arr.empty())
    return false;

  for (int i = 0; i < arr.size(); ++i)
  {
    if (find(arr.begin(), arr.end(), i) == arr.end())
      return false;
  }
  
  return true;
}
