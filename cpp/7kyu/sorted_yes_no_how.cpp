/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp


Instructions:
Complete the method which accepts an array of integers, and returns one of the following:
"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise

The order does not have to be strict: a sorted array can contain consecutive duplicates, e.g. [1, 1, 2, 3] is sorted in ascending order.

It is guaranteed that there will always be a unique valid answer. More precisely:
there will be no arrays with less than 2 elements
there will be no arrays where all elements are equal

*/

#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string is_sorted_and_how(const vector<int>& a){
    if (is_sorted(begin(a), end(a)))
        return "yes, ascending";
        
    if (is_sorted(rbegin(a), rend(a)))
        return "yes, descending";
      
    return "no";
}
