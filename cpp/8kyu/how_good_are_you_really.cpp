/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp


Instructions:
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.
You receive an array with your peers' test scores. Now calculate the average and compare your score!
Return true if you're better, else false!

Note:
Your points are not included in the array of your class's points. Do not forget them when calculating the average score!

*/

#include <vector>
#include <numeric>
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
  int total = accumulate(classPoints.begin(), classPoints.end(), 0);
  double average = static_cast<double>(total) / classPoints.size();
  return yourPoints > average;
}
