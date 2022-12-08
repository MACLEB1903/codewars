/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55a70521798b14d4750000a4/train/cpp


Instructions: 
Make a function that will return a greeting statement that uses an input; your program should return, "Hello, <name> how are you doing today?".
[Make sure you type the exact thing I wrote or the program may not execute properly]
    
*/

#include <string>
using namespace std;  

string greet(const string& n){
  return "Hello, " + n + " how are you doing today?";
}
