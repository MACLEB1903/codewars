/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/593fa63de23e763d7c0000df/train/cpp


Instructions:
Too close to the FTP example?
Could do it as shift right - or would that answer be too obvious?

*/

#include <string>
using namespace std;
long long shiftLeft(string s, string t){
  int count = 0;
  
  while(s != t)
  {
    if(s.length() > t.length())
      s.erase(s.begin());
    else
      t.erase(t.begin());
    
    ++count;
  }
  
  return count;
}
