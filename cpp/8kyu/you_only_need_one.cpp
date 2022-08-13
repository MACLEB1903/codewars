/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/cpp


Instructions:   
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.
a can contain numbers or strings. x can be either.
Return true if the array contains the value, false if not.

*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool check(const vector<string>& seq, const string& elem) {
    if (count(seq.begin(), seq.end(), elem)) return true;
  
    return false;
}



bool check(const vector<string>& seq, const string& elem) {
    bool result = false;
    
    for(int i = 0; i < seq.size(); i ++){
      if(elem == seq[i]){
        result = true;
      }
    }
    return result;
}
