/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55edaba99da3a9c84000003b/train/cpp



Instructions:
Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor.

Example(Input1, Input2 --> Output)
[1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]

*/

using namespace std;
vector<int> divisible_by(vector<int> numbers, int divisor)
{ 
    vector<int> divisibles;
  
    for (int i = 0; i<numbers.size(); i++){
      if (numbers[i]%divisor == 0) divisibles.push_back(numbers[i]);
    }
  return divisibles;
}