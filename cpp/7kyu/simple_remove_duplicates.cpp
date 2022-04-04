/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5ba38ba180824a86850000f7/train/cpp


Instructions:
Remove the duplicates from a list of integers, keeping the last ( rightmost ) occurrence of each element.
Example::

For input: [3, 4, 4, 3, 6, 3]
remove the 3 at index 0
remove the 4 at index 1
remove the 3 at index 3

Expected output: [4, 6, 3]

More examples can be found in the test cases.

if:lambdacalc
Encodings

purity: LetRec  
numEncoding: BinaryScott  

export constructors nil, cons and deconstructor foldr for your List encoding.  

Good luck!

*/

#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solve(vector<int> vec){    
    unordered_set<int> unorderedSet(vec.rbegin(), vec.rend());
  
    vec.assign(unorderedSet.begin(), unorderedSet.end());
  
    return vec;
}#include <vector>

vector<int> solve(vector<int> vec){
  vector<int> result;
  
  reverse(vec.begin(), vec.end());
  
  for (auto i : vec){
    if (count(result.begin(), result.end(), i)) continue;
    
    result.push_back(i);
  }
  
  reverse(result.begin(), result.end());

  return result;
}
