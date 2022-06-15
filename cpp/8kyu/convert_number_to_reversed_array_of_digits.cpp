/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/cpp


Instructions:
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example (Input => Output):
35231 => [1,3,2,5,3]
0     => [0]

*/

#include <vector>
#include <string>
using namespace std;

vector<int> digitize(unsigned long n) {
    vector<int> nums;
    string num_str = to_string(n);
    
    for (char ch : num_str) {
        nums.insert(nums.begin(), ch - '0');  
    }

    return nums;
}

