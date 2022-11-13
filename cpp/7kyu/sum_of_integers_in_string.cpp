/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/598f76a44f613e0e0b000026/train/cpp


Instructions:
Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string <code>"The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog"</code>, the sum of the integers is <code>3635</code>.
Note: only positive integers will be tested.*

*/

#include <string>
using namespace std;
 
int sumOfIntegers (const string& str){
  int result = 0;
  int current = 0;
  
  for (char c : str)
  {
    if (isdigit(c))
    {
      current = current* 10 + c-'0';
    }
    else
    {
      result += current;
      current = 0;
    }
  }
  
  return result + current;
}
