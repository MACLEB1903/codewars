/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/514a6336889283a3d2000001/train/cpp


Instructions:
if:javascript
JavaScript Arrays support a filter function (starting in JavaScript 1.6). Use the filter functionality to complete the function given.

if:csharp
Starting with .NET Framework 3.5, C# supports a Where (in the System.Linq namespace) method which allows a user to filter arrays based on a predicate. Use the Where method to complete the function given.

Enumerable.Where documentation:
https://msdn.microsoft.com/en-us/library/bb534803(v=vs.110).aspx

if:python
In Python, there is a built-in filter function that operates similarly to JS's filter. For more information on how to use this function, visit https://docs.python.org/3/library/functions.html#filter

if:haskell
Given list of integers return even integers on that list.
The solution would work like the following:
javascript
getEvenNumbers([2,4,5,6]) // should == [2,4,6]

csharp
Kata.GetEvenNumbers(new int[] {2, 4, 5, 6}) => new int[] {2, 4, 6}

crystal
get_even_numbers([2,4,5,6]) => [2,4,6]

r
get_even_numbers(c(2,4,5,6)) => c(2,4,6)

julia
getevennumbers([2,4,5,6]) => [2,4,6]

coffeescript
getEvenNumbers([2,4,5,6]) => [2,4,6]

python
get_even_numbers([2,4,5,6]) => [2,4,6]

ruby
get_even_numbers([2,4,5,6]) => [2,4,6]

cpp
get_even_numbers({2,4,5,6}) => {2,4,6}

haskell
getEvenNumbers [2,4,5,6] => [2,4,6]

*/

#include <vector>
using namespace std;

vector<int> get_even_numbers(const vector<int>& arr){
  vector<int> res;
  
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] % 2 == 0){
      res.push_back(arr[i]);
    }
  }
  
  return res;
}
