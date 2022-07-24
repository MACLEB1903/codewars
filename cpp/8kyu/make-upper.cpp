/*
Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/cpp


Instructions:
Write a function which converts the input string to uppercase.

*/

#include <string>
#include <algorithm>
using namespace std;

string makeUpperCase (const string& input_str){
    string result = input_str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}   