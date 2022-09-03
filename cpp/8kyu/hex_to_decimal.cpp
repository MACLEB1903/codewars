/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a4d500e298a7952100035d/train/cpp


Instructions:
Complete the function which converts hex number (given as a string) to a decimal number.

*/

#include <string>
using namespace std;

int hexToDec(string hexString) {
    return stoi(hexString, nullptr, 16);
}
