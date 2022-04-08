/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/cpp


Instructions:
If you can't sleep, just count sheeps!!

Task:
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". 
Input will always be valid, i.e. no negative integers.

*/

#include <string>
using namespace std;

string countSheep(int number){
    string result;
    for (int i = 1; i<=number; i++){
        result += to_string(i) + " sheep...";
    }
    return result;
}