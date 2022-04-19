/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a8c1b06fd5777d4c00000dd/train/cpp


Instructions:
*Principal Diagonal -- The principal diagonal in a matrix identifies those elements of the matrix running from North-West to South-East.
*Secondary Diagonal -- the secondary diagonal of a matrix identifies those elements of the matrix running from North-East to South-West.

For example:
matrix:             [1, 2, 3]
                    [4, 5, 6]
                    [7, 8, 9]

principal diagonal: [1, 5, 9]
secondary diagonal: [3, 5, 7]

Task:
Your task is to find which diagonal is "larger": which diagonal has a bigger sum of their elements.
If the principal diagonal is larger, return "Principal Diagonal win!"
If the secondary diagonal is larger, return "Secondary Diagonal win!"
If they are equal, return "Draw!"

Note: You will always receive matrices of the same dimension.

*/

#include <string>
#include <vector>
#include <numeric>
using namespace std;

string diagonal (const vector<vector<int>> &matrix){
  vector<int> principal;
  vector<int> secondary;
  
  int size = matrix.size();
  
  for (int i = 0; i < size; ++i)
  {
    principal.push_back(matrix[i][i]);
    secondary.push_back(matrix[i][size - i - 1]);
  }
  
  int principalSum = accumulate(principal.begin(), principal.end(), 0);
  int secondarySum = accumulate(secondary.begin(), secondary.end(), 0);
  
  if (principalSum > secondarySum)
    return "Principal Diagonal win!";
    
  if (secondarySum > principalSum)
    return "Secondary Diagonal win!";
    
  return "Draw!";
}
