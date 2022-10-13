/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5865918c6b569962950002a1/train/cpp


Instructions:
Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.
If no occurrences can be found, a count of 0 should be returned.

("Hello", 'o')  =>  1
("Hello", 'l')  =>  2
("", 'z')       =>  0

Notes:
The first argument can be an empty string
In languages with no distinct character data type, the second argument will be a string of length 1

*/

#include <string>
using namespace std;

int strCount(const string& s, char c){
    int count = 0;
    for (int i = 0; i< s.size(); i++){
        if (s[i] == c) count++;
    }
    return count;
}