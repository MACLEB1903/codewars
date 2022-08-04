/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a29a0898f27f2d9c9000058/train/cpp


Instructions:
In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters (everything else), as follows.

The order is: uppercase letters, lowercase letters, numbers and special characters.

python
"*'&ABCDabcde12345" --> [ 4, 5, 5, 3 ]

More examples in the test cases. 

Good luck!

*/

using namespace std;

vector<int> solve(string s){
  int upper = 0, lower = 0, number = 0, special = 0;
  
  for (int i = 0; i < s.length(); i++) 
  {
      if (s[i] >= 'A' && s[i] <= 'Z')
          upper++;
      else if (s[i] >= 'a' && s[i] <= 'z')
          lower++;
      else if (s[i]>= '0' && s[i]<= '9')
          number++;
      else
          special++;
  }
  
  return vector {upper, lower, number, special};
}
