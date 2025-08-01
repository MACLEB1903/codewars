/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/cpp


Instructions:
Several people are standing in a row divided into two teams. The first person goes into team 1, the second goes into team 2, the third goes into team 1, and so on.

Task:
Given an array of positive integers (the weights of the people), return a new array / tuple of two integers (depending on your language), whereby the first one is the total weight of team 1, and the second one is the total weight of team 2. Note that the array will never be empty.

Example: 
[13, 27, 49] returns [62, 27] or (62, 27) (depending on your language) because the total weight of team 1 is $ 13 + 49 = 62 $ and the total weight of team 2 is $ 27 $.
[50, 60, 70, 80] returns [120, 140] or (120, 140)  (depending on your language) because the total weight of team 1 is $ 50 + 70 = 120 $ and the total weight of team 2 is $ 60 + 80 = 140 $.
[80] returns [80, 0] or (80, 0)  (depending on your language) because the total weight of team 1 is $ 80 $ and the total weight of team 2 is $ 0 $.

*/

#include <vector>
#include <utility>
using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights){
  pair<int, int> result;
  
  int i = 1;
  for (auto weight : weights)
  {
    if (i % 2 == 1){
        result.first += weight;
    } else {
        result.second += weight;
    }
    ++i;
  }
  
  return result;
}
