/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/586a933fc66d187b6e00031a/train/cpp


Instructions:
You are developing an image hosting website.
You have to create a function for generating random and unique image filenames.
Create a function for generating a random 6 character string which will be used to access the photo URL. 
To make sure the name is not already in use, you are given access to an PhotoManager object.
You can call it like so to make sure the name is unique

javascript
// at this point, the website has only one photo, hosted on the 'ABCDEF' url
photoManager.nameExists('ABCDEF'); // returns true
photoManager.nameExists('BBCDEF'); // returns false

java
// at this point, the website has only one photo, hosted on the 'ABCDEF' url
photoManager.nameExists("ABCDEF"); // returns true
photoManager.nameExists("BBCDEF"); // returns false

cpp
// at this point, the website has only one photo, hosted on the 'ABCDEF' url
photoManager.nameExists("ABCDEF"); // returns true
photoManager.nameExists("BBCDEF"); // returns false

Note:We consider two names with same letters but different cases to be unique.

*/

#include <string>
#include <vector>
using namespace std;

string generateName()
{
  static const char alpha[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
  
  string generatedName;

  for (int i = 0; i < 6; ++i) {
      generatedName += alpha[rand() % (sizeof(alpha) - 1)];
  }
  
  if (photoManager.nameExists(generatedName))
    return generateName();
  
  return generatedName;
}
