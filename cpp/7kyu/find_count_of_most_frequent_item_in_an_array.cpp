/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56582133c932d8239900002e/train/cpp


Instructions:
Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array return 0

Example:
Input array: [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
Output: 5
The most frequent number in the array is -1 and it occurs 5 times.

*/

#include <vector>
using namespace std;

int most_frequent_item_count(const vector<int>& collection){
  if (collection.size() == 0) return 0;
  
  map<int, int> counts;
  
  for (auto item : collection)
  {
    const auto it = counts.find(item);
    if (it != counts.end())
      it->second++;
    else
      counts.insert(pair<int, int>(item, 0));
  }

  auto pr = max_element(counts.begin(), counts.end(), [](auto x, auto y){
      return x.second < y.second;
  });
    
  return pr->second + 1;
}
