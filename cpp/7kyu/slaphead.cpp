/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57efab9acba9daa4d1000b30/train/cpp


Instructions:
Being a bald man myself, I know the feeling of needing to keep it clean shaven. Nothing worse that a stray hair waving in the wind. 
You will be given a string(x). Clean shaved head is shown as "-" and stray hairs are shown as "/". Your task is to check the head for stray hairs and get rid of them. 
You should return the original string, but with any stray hairs removed. Keep count ot them though, as there is a second element you need to return:

0 hairs --> "Clean!"<br>
1 hair --> "Unicorn!"<br>
2 hairs --> "Homer!"<br>
3-5 hairs --> "Careless!"<br>
\>5 hairs --> "Hobo!"

So for this head: "------/------" you shoud return:<br>

["-------------", "Unicorn"]

*/

#include <string>
#include <utility>
#include <algorithm>
using namespace std;

pair<string, string> bald(const string& s){
  int hairs = 0;
  char ch = '/';

  for (auto c : s)
  {
    if (c == ch)
      ++hairs;
  }
  
  string newString = s;
  replace(newString.begin(), newString.end(), '/', '-');
  
  if (hairs == 0)
    return pair(newString, "Clean!");
  
  if (hairs == 1)
    return pair(newString, "Unicorn!");
  
  if (hairs == 2)
    return pair(newString, "Homer!");

  
  if (hairs >= 3 && hairs <= 5)
    return pair(newString, "Careless!");
  
  if (hairs > 5)
    return pair(newString, "Hobo!");
}
