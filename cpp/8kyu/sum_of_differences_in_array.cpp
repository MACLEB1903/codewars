/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/cpp


Instructions: 
Your task is to sum the differences between consecutive pairs in the array in descending order.

Example:
 [2, 1, 10]  -->  9
 In descending order: [10, 2, 1]
 Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).

Notes:
You don't have to find any zip object, nor iterate over it. Just return the sum.

 */


#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

int sumOfDifferences(const vector<int>& arr){
  if (arr.size() < 2)
    return 0;  
  
  vector<int> sorted = arr; 
  vector<int> result;

  sort(sorted.begin(), sorted.end(), greater <>());
  
  for (int i = 0; i < sorted.size() - 1; ++i)
  {  
    result.push_back(sorted[i] - sorted[i + 1]);
  }
  
  return accumulate(result.begin(), result.end(), 0);
}
