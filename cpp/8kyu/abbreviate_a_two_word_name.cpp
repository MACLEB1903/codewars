/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/cpp


Instructions:
Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:
Sam Harris => S.H
patrick feeney => P.F

*/

#include <string>
#include <cctype>

using namespace std;

string abbrevName(string name) {
    return string(1, toupper(name[0])) + "." + string(1, toupper(name[name.find(' ') + 1]));
}
