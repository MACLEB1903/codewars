/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp


Instructions:
You are going to be given a non-empty string. Your job is to return the middle character(s) of the string.
If the string's length is odd, return the middle character.
If the string's length is even, return the middle 2 characters.
Example:

javascript
"test" --> "es"
"testing" --> "t"
"middle" --> "dd"
"A" --> "A"

*/

using namespace std;

string get_middle(string input) 
{
    int length = input.size();
    int middle = length / 2;
  
    if (length % 2 == 0)
      return input.substr((middle) - 1, 2);
  
    return input.substr(middle, 1);
}
