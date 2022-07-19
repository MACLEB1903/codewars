/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59b44d00bf10a439dd00006f/train/cpp


Instructions:
Make a function "add" that will be able to sum elements of list continuously and return a new list of sums.

For example: 

add [1,2,3,4,5] == [1, 3, 6, 10, 15], because it's calculated like 
this : [1, 1 + 2, 1 + 2 + 3, 1 + 2 + 3 + 4, 1 + 2 + 3 + 4 + 5]

If you want to learn more see https://en.wikipedia.org/wiki/Prefix_sum

*/


#include <vector>
using namespace std;

vector<int> add(const vector<int>& arr){
  vector<int> result;
  int sum = 0;
  
  for (int element : arr)
  {
    sum += element;
    result.push_back(sum);
  }
  
  return result;
}
