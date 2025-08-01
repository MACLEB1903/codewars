/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55caf1fd8063ddfa8e000018/train/cpp


Instructions:
In your class, you have started lessons about arithmetic progression. Since you are also a programmer, you have decided to write a function that will return the first n elements of the sequence with the given common difference d and first element a. Note that the difference may be zero!
The result should be a string of numbers, separated by comma and space.

Example:
python
first element: 1, difference: 2, how many: 5
arithmetic_sequence_elements(1, 2, 5) == "1, 3, 5, 7, 9"

if:fortran
Note: In Fortran, your returned string is* not *permitted to contain redundant leading/trailing whitespace.*

if:c
Note: The returned string will be free'd if non-NULL.


*/

#include <string>
using namespace std;

string arithmeticSequenceElements(int a, int d, int n){
  string result;
  
  for(int i = 0; i < n; i++)
  {
    result += to_string(a) + ", ";
    
    a += d;
  }
  
  return result.substr(0, result.size() - 2);
}
