/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57073869924f34185100036d/train/cpp


Instructions:
Write a function that will randomly upper and lower characters in a string - randomCase() (random_case() for Python).

A few examples:
randomCase("Lorem ipsum dolor sit amet, consectetur adipiscing elit") == "lOReM ipSum DOloR SiT AmeT, cOnsEcTEtuR aDiPiSciNG eLIt"
randomCase("Donec eleifend cursus lobortis") == "DONeC ElEifEnD CuRsuS LoBoRTIs"

Notes: 
1. This function will work within the basic ASCII character set to make this kata easier - so no need to make the function multibyte safe.
2. The letters MUST be selected randomly - filters are set to make sure there is no cheating!

*/

#include <string>
#include <cstdlib>
using namespace std;

string randomCase(string x){
  string result = "";
  
  for (char c : x)
  {
    if (rand() % 2)
      result += toupper(c);
    else
      result += tolower(c);
  }
  
  return result;
}
