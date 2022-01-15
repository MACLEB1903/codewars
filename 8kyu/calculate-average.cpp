/*

Write a function which calculates the average of the numbers in a given array.

Note: Empty arrays should return 0.

*/

#include <vector>
using namespace std;

double calcAverage(const vector<int>& values){
    if(values.empty()) return 0;

    double sum =0;
    for(int val: values) {
        sum += val;
    }

    return sum / values.size();
}