/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/cpp


Instructions:
Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array. Note that the array size is at least 2 and consists a mixture of positive, negative integers and also zeroes.

Example:
[1, 2, 3] returns 6 because the maximum product is obtained from multiplying $\ 2 * 3 = 6 $
[9, 5, 10, 2, 24, -1, -48] returns 50 because the maximum product is obtained from multiplying $\ 5 * 10 = 50 $
[-23, 4, -5, 99, -27, 329, -2, 7, -921] returns -14 because the maximum product is obtained from multiplying $\ -2 * 7 = -14 $

*/

#include <vector>
using namespace std;

using namespace std; 

int adjacentElementsProduct(vector<int> inputArray) 
{
  int result = numeric_limits<int>::min();

  for(int i = 1; i < inputArray.size(); ++i)
  {
    int product = inputArray[i] * inputArray[i - 1];

    if (product > result) 
        result = product;
  }
  
  return result;
}
