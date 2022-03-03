/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp


Instructions:
You are given an odd-length array of integers, in which all of them are the same, except for one single number.
Complete the method which accepts such an array, and returns that single different number.
The input array will always be valid! (odd-length >= 3)

Example:
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

*/

using namespace std;

int stray(vector<int> numbers){
   sort(numbers.begin(), numbers.end());
  
  return (numbers[0] != numbers[1]) ? numbers.front() : numbers.back();
};
