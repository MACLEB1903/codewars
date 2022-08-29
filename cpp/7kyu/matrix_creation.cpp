/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a34da5dee1aae516d00004a/train/cpp


Instructions:
Create an identity matrix of the specified size ( >= 0 ).

Some examples:

(1)  =>  [[1]]

(2) => [ [1,0],
         [0,1] ]

       [ [1,0,0,0,0],
         [0,1,0,0,0],
(5) =>   [0,0,1,0,0],
         [0,0,0,1,0],
         [0,0,0,0,1] ]

*/

using namespace std;

vector<vector<int>> getMatrix(const int n){
  vector<vector<int>> result(n, vector<int>(n, 0));
  
  for (int i = 0; i < n; ++i){
    result[i][i] = 1;
  }
  
  return result;
}
