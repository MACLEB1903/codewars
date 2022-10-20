/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/cpp


Instructions:
Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.

Write a function which takes a list of strings and returns each line prepended by the correct number.

The numbering starts at 1. The format is n: string. Notice the colon and space in between.
Examples: (Input --> Output)

[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]

*/

#include <string>
#include <vector>
using namespace std;

vector<string> number(const vector<string> &lines){
    vector<string> res;  
  
    for (int i = 1; i <= lines.size(); i++){
      res.push_back("" + to_string(i) + ": " + lines[i - 1]);
    }
  
    return res;
}
