/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/64fbfe2618692c2018ebbddb/train/cpp


Instructions:
Task:
Create a function that always returns True/true for every item in a given list.
However, if an element is the word 'flick', switch to always returning the opposite boolean value.

Examples
['codewars', 'flick', 'code', 'wars'] ➞ [True, False, False, False]
['flick', 'chocolate', 'adventure', 'sunshine'] ➞ [False, False, False, False]
['bicycle', 'jarmony', 'flick', 'sheep', 'flick'] ➞ [True, True, False, False, True]

Notes:
"flick" will always be given in lowercase.
A list may contain multiple flicks.
Switch the boolean value on the same element as the flick itself.

*/

#include <vector>
#include <string>
using namespace std;

vector<bool> flick_switch(const vector<string>& arr) {
  bool is_flicked = true;
  vector<bool> switches;

  for (const string& x : arr) {
    if (x == "flick") {
      is_flicked = !is_flicked;
    }
    switches.push_back(is_flicked);
  }

  return switches;
}
