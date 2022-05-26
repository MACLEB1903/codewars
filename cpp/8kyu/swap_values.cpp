/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5388f0e00b24c5635e000fc6/train/cpp


Instructions:
I would like to be able to pass an array with two elements to my swapValues function to swap the values. However it appears that the values aren't changing.

Can you figure out what's wrong here?

*/

#include <utility>
using namespace std;

pair<int, int> swap_values(pair<int, int> values) {
  int temp = values.first;
  values.first = values.second;
  values.second = temp;
  return values;
}
