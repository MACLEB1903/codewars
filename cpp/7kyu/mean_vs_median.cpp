/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5806445c3f1f9c2f72000031/train/cpp


Instructions:
Your goal is to implement the method meanVsMedian which accepts an *odd-length* array of integers and returns one of the following:
'mean' - in case mean value is larger than median value
'median' - in case median value is larger than mean value
'same' - in case both mean and median share the same value

Reminder: Median

Array will always be valid (odd-length >= 3)

*/

using namespace std;

double findMean(vector<int> numbers){
    int sum = 0;
  
    for (auto number : numbers){
      sum += number;
    }
 
    return (double) sum / (double) numbers.size();
}
 
double findMedian(vector<int> numbers){
    sort(numbers.begin(), numbers.end());

    return (double) numbers[numbers.size() / 2];
}

string meanVsMedian(vector<int> numbers){
  double mean = findMean(numbers);
  double median = findMedian(numbers);
  
  if (mean == median)
    return "same";
  
  if (median > mean)
    return "median";
  
  return "mean";
}
