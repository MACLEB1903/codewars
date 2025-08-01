/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59d9ff9f7905dfeed50000b0/train/cpp


Instructions:
Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5. 

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,
solve(["abode","ABc","xyzD"]) = [4, 3, 1]
See test cases for more examples.

Input will consist of alphabet characters, both uppercase and lowercase. No spaces.

Good luck!

*/

#include <vector>
#include <string>
#include <cctype>
using namespace std;

vector<int> solve(const vector<string>& arr){
    vector<int> result (arr.size());
  
    for (int i = 0; i < arr.size(); i++)
    {
      for (int j = 0; j < arr[i].length(); j++)
      {
        if (toupper(arr[i][j]) - 65 == j)
          result[i]++;
      }
    }
  
    return result;
};
