/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59e66e48fc3c499ec5000103/train/cpp


Instructions:
In this Kata, you will be given an array of arrays and your Task: will be to return the number of unique arrays that can be formed by picking exactly one element from each subarray. 

For example: solve([[1,2],[4],[5,6]]) = 4, because it results in only 4 possibilites. They are [1,4,5],[1,4,6],[2,4,5],[2,4,6]. 
if:r
In R, we will use a list data structure.
So the argument for solve is a list of numeric vectors.

solve(list(c(1, 2), 4, c(5, 6)))
[1] 4

Make sure that you don't count duplicates; for example solve([[1,2],[4,4],[5,6,6]]) = 4, since the extra outcomes are just duplicates. 
See test cases for more examples.

*/

#include <vector>
#include <algorithm>
using namespace std;

int solve(const vector<vector<int>> &data)
{
  int result = 1;
  
  for (auto it : data) {
    sort(it.begin(), it.end());
    it.erase(unique(it.begin(), it.end()), it.end());
    result *= it.size();
  }
  
  return result;
}
