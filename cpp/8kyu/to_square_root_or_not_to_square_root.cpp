/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57f6ad55cca6e045d2000627/train/cpp


Instructions:
Write a method, that will get an integer array as parameter and will process every number from this array.

Return a new array with processing every number of the input-array like this:

If the number has an integer square root, take this, otherwise square the number.

Example
[4,3,9,7,2,1] -> [2,9,3,49,4,1]
Notes
The input array will always contain o

*/

#include <vector>
#include <cmath>
using namespace std;

vector<int> squareOrSquareRoot(const vector<int>& array) {
    vector<int> arr;
    for (int num : array) {
        int root = sqrt(num);
        if (root * root == num) {
            arr.push_back(root);
        } else {
            arr.push_back(num * num);
        }
    }
    return arr;
}
