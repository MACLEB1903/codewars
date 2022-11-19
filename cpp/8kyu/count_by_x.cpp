/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/cpp


Instructions:
Create a function with two arguments that will return an array of the first n multiples of x.
Assume both the given number and the number of times to count will be positive numbers greater than 0.
Return the results as an array or list ( depending on language ).

Examples:
x = 1, n = 10 --> [1,2,3,4,5,6,7,8,9]
*/

#include <vector>
using namespace std;

vector<int> countBy(int x,int n){
  vector<int> count;
  
  for(int i=1; i<=n; i++){
    count.push_back(i*x);
  }
  return count;
}