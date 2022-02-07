/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/596c6eb85b0f515834000049/train/cpp


Instructions:
The code provided is supposed replace all the dots . in the specified String str with dashes -
But it's not working properly.

Task:
Fix the bug so we can all go home early.

Notes:
String str will never be null.

*/

#include <regex>
#include <string>

using namespace std;

string replace_dots(const string& str){
    return regex_replace(str, regex{ R"(\.)" }, "-");
}