/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57b5907920b104772c00002a/train/cpp


Instructions:
The Cat In The Hat has cat A under his hat, cat A has cat B under his hat and so on until Z
The Cat In The Hat is 2,000,000 cat units tall.
Each cat is 2.5 times bigger than the cat underneath their hat.
Find the total height of the cats if they are standing on top of one another.

Counting starts from the Cat In The Hat
n = the number of cats   
fix to 3 decimal places.

*/

#include <cmath>
using namespace std;

class Kata
{
public:
    string height(int n)
    {
      double catHeight = 2000000;
      double totalHeight = 0;
      
      for (int i = 0; i < n; i++){
        totalHeight += catHeight / 2.5;
        catHeight /= 2.5;
      }
      
      string result = to_string(round((totalHeight + 2000000) * 1000) / 1000);
      return result.substr(0, result.length() - 3);
    }
};
