/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp


Instructions:
Given a lowercase string that has alphabetic characters only and no spaces, return the highest value of consonant substrings. Consonants are any letters of the alphabet except "aeiou". 
We shall assign the following values: a = 1, b = 2, c = 3, .... z = 26.
For example, for the word "zodiac", let's cross out the vowels. We get: "z ~~o~~ d ~~ia~~ c"
"zodiac" -> 26

The consonant substrings are: "z", "d" and "c" with values "z" = 26, "d" = 4 and "c" = 3. The highest is 26.
"strength" -> 57

The consonant substrings are: "str" and "ngth" with values "str" = 19 + 20 + 18 = 57 and "ngth" = 14 + 7 + 20 + 8 = 49. The highest is 57.

For C: do not mutate input.

*/

#include <string>
using namespace std;

int solve(const string &s) {
  int max = 0;
  int check = 0;
  
  for (char c : s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      max = max(max, check);
      check = 0;
    }
    else {
      check += c - 'a' + 1;
    }
  }
  return max(max, check);
}
