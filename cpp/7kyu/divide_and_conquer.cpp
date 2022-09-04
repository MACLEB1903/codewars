/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57eaec5608fed543d6000021/train/cpp


Instructions:
Given a mixed array of number and string representations of integers, add up the non-string integers and subtract the total of the string integers. 
Return as a number.

*/

#include <vector>
#include <variant>
#include <iostream>
using namespace std;

int divCon(const vector<variant<int, char>>& x){
  int intSum = 0, stringSum = 0;
  
  for (auto number : x){
    if (number.index() == 0){
      intSum += get<0>(number);
    } else {
      stringSum += (get<1>(number) - '0');
    }
  }
  
  return intSum - stringSum;
}
