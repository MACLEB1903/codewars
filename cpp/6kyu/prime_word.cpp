/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b1e2c04553292dacd00009e/train/cpp


Instructions:
X and Y are playing a game. A list will be provided which contains n pairs of strings and integers. They have to add the integer<sub>i</sub> to the ASCII values of the string<sub>i</sub> characters. Then they have to check if any of the new added numbers is prime or not. If for any character of the word the added number is prime then the word will be considered as prime word. 
Can you help X and Y to find the prime words?

Example:
cpp
prime_word({{"Emma",30},{"Liam",30}}) = {1,1};
python
prime_word([["Emma", 30], ["Liam", 30]])  ->  [1, 1]
For the first word "Emma" ASCII values are: 69 109 109 97
After adding 30 the values will be: 99 139 139 127
As 139 is prime number so "Emma" is a Prime Word.

*/

#include <cmath>
#include <string>
#include <vector>
#include <utility>
using namespace std;

bool is_prime(int n) {
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;   

  return true;
}

vector<int> prime_word(const vector<pair<string, int>> &list){
  vector<int> result (list.size(), 0);
  
  for (size_t i = 0; i < list.size(); ++i) {
    for (char letter : list[i].first) {
      int newNumber = letter + list[i].second;
      if (is_prime(newNumber)) {
        ++result[i];
        break;
      }
    }
  }
  
  return result;
}
