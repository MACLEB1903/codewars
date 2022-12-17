/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/cpp


Instructions:
When provided with a number between 0-9, return it in words. Note that the input is guaranteed to be within the range of 0-9.

Input: 1
Output: "One".

*/

#include <string>
using namespace std;

string switch_it_up(int number){
  
  string numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};
  return numbers[number];
}
