/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57096af70dad013aa200007b/solutions/cpp


Instructions:
Your Task
Given an array of Boolean values and a logical operator, return a Boolean result based on sequentially applying the operator to the values in the array.

Examples:
booleans = [True, True, False], operator = "AND"
True AND True -> True
True AND False -> False
return False

booleans = [True, True, False], operator = "OR"
True OR True -> True
True OR False -> True
return True

booleans = [True, True, False], operator = "XOR"
True XOR True -> False
False XOR False -> False
return False

Input:
an array of Boolean values (1 <= array_length <= 50)
a string specifying a logical operator: "AND", "OR", "XOR"

Output:
A Boolean value (True or False).

*/

#include <string>
#include <vector>
using namespace std;

bool logicalCalc(const vector<bool>& items, const string& op) {
    bool result = items[0];

    for (size_t i = 1; i < items.size(); i++) {
        if (op == "AND") result = result && items[i];
        else if (op == "OR") result = result || items[i];
        else if (op == "XOR") result = result != items[i];
    }

    return result;
}