/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp


Instructions: 
I have a cat and a dog.

I got them at the same time as kitten/puppy. That was humanYears years ago.

Return their respective ages now as [humanYears,catYears,dogYears]

NOTES:
humanYears >= 1
humanYears are whole numbers only

Cat Years
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that

Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
    
*/

#include <vector>
using namespace std;

vector<int> humanYearsCatYearsDogYears(int humanYears) {
  if (humanYears == 1)
    return {1,15,15};
  
  if (humanYears == 2)
    return {2,24,24};
  
  return {humanYears, 24 + (humanYears - 2) * 4,24 +(humanYears - 2) *5};
}
