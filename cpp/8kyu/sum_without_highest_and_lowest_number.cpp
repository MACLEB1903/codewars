/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/cpp


Instructions: 
Task:
 Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).
 The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.
 Mind the input validation.
    
 */




#include<vector>
#include <algorithm>

using namespace std;            

int sum(vector<int> numbers)
{
    if (numbers.size() == 0)
      return 0;
      
    sort(numbers.begin(), numbers.end());
  
    int sum = 0;
    for (int i = 1; i < numbers.size() - 1; i++)
    {
        sum += numbers[i];
    }
        
    return sum;
}
