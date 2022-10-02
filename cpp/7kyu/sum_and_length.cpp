/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/571965ccdf7fdb10a00000ea/train/cpp


Instructions:
Sum and Length
In this kata you must return a string value, where the first part is the sum of positive numbers and the second part is the number of negative numbers.<br><b>Knowing</b> that the first '0' is negative, the second is positive, the third is negative, and so on...

javascript
sumLength([-1,2,3,4,0,1,0,-2,0,-3])
return '10 5' (10 = 1 + 2 + 3 + 4 and 5 = 3 + 2 => 3 negatives numbers + second 0 as negative)

csharp
SumLength(new[] {-1, 2, 3, 4, 0, 1, 0, -2, 0, -3})
return "10 5" (10 = 1 + 2 + 3 + 4 and 5 = 3 + 2 => 3 negatives numbers + second 0 as negative)

cpp
sumLength(vector<int> { -1, 2, 3, 4, 0, 1, 0, -2, 0, -3 });
return "10 5" (10 = 1 + 2 + 3 + 4 and 5 = 3 + 2 => 3 negatives numbers + second 0 as negative)

php
sum_length([-1, 2, 3, 4, 0, 1, 0, -2, 0, -3]); // returns "10 5" (10 = 1 + 2 + 3 + 4 and 5 = 3 + 2 => 3 negatives numbers + second 0 as negative)

*/

#include<vector>
using namespace std;

string sumLength(vector<int> input){
  pair<int, int> result;
  bool isZeroNegative = true;
  for (size_t i = 0; i < input.size(); ++i){
    if (input[i] > 0)
      result.first += input[i];
    else if (input[i] < 0)
      result.second++;        
    else {
      if (isZeroNegative)
        result.second++;
      isZeroNegative = !isZeroNegative;
    }
   
  }
  
  return to_string(result.first) + " " + to_string(result.second);
}
