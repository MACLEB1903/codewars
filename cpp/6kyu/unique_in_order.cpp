/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54e6533c92449cc251001667/train/cpp


Instructions:
Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

For example:

cpp
uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}

javascript
uniqueInOrder('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
uniqueInOrder('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
uniqueInOrder([1,2,2,3,3])       == [1,2,3]

typescript
uniqueInOrder('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
uniqueInOrder('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
uniqueInOrder([1,2,2,3,3])       == [1,2,3]

python
unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
unique_in_order([1, 2, 2, 3, 3])   == [1, 2, 3]
unique_in_order((1, 2, 2, 3, 3))   == [1, 2, 3]

ruby
unique_in_order('AAAABBBCCDAABBB') == ['A', 'B', 'C', 'D', 'A', 'B']
unique_in_order('ABBCcAD')         == ['A', 'B', 'C', 'c', 'A', 'D']
unique_in_order([1,2,2,3,3])       == [1,2,3]

haskell
uniqueInOrder "AAAABBBCCDAABBB" == "ABCDAB"
uniqueInOrder "ABBCcAD"         == "ABCcAD"
uniqueInOrder [1,2,2,3,3]       == [1,2,3]

crystal
unique_in_order("AAAABBBCCDAABBB") == ['A', 'B', 'C', 'D', 'A', 'B']
unique_in_order("ABBCcAD")         == ['A', 'B', 'C', 'c', 'A', 'D']
unique_in_order([1,2,2,3,3])       == [1,2,3]
scala

uniqueInOrder("AAAABBBCCDAABBB")   == List('A', 'B', 'C', 'D', 'A', 'B')
uniqueInOrder("ABBCcAD")           == List('A', 'B', 'C', 'c', 'A', 'D')
uniqueInOrder(List(1, 2, 2, 3, 3)) == List(1, 2, 3)

*/

#include <string>
#include <vector>
using namespace std;

template <typename T> vector<T> uniqueInOrder(const vector<T>& iterable){
  vector<T> result;
  
  for (const auto& c : iterable)
  {
    if (result.empty() || c != result.back())
      result.push_back(c);
  }
  
  return result;
}

vector<char> uniqueInOrder(const string& iterable) {
  vector<char> result;
  
  for (auto c : iterable)
  {
    if (result.empty() || c != result.back())
      result.push_back(c);
  }
  
  return result;
}
