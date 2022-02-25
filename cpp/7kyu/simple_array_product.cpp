/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5d0365accfd09600130a00c9/train/cpp


Instructions:
In this Kata, you will be given a multi-dimensional array containing 2 or more sub-arrays of integers. Your task is to find the maximum product that can be formed by taking any one element from each sub-array.

Example:
solve( [[1, 2],[3, 4]] ) = 8. The max product is given by 2 * 4
solve( [[10,-15],[-1,-3]] ) = 45, given by (-15) * (-3)
solve( [[1,-1],[2,3],[10,-100]] ) = 300, given by (-1) * 3 * (-100)

More examples in test cases. Good luck!

*/

using namespace std;

int solve(vector<vector<int>> v){
  int min = 1, max = 1;
  
  for (auto vec : v){
    int currentMin = *min_element(vec.begin(), vec.end());
    int currentMax = *max_element(vec.begin(), vec.end());
    vector<int> result = {min * currentMin, min * currentMax, max * currentMin, max * currentMax};
    
    min = *min_element(result.begin(), result.end());
    max = *max_element(result.begin(), result.end());
  }
  
  return max;
}
