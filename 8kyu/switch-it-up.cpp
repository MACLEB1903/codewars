/*

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