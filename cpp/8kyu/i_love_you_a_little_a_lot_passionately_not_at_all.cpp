/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57f24e6a18e9fad8eb000296/train/cpp


Instructions:
Who remembers back to their time in the schoolyard, when girls would take a flower and tear its petals, saying each of the following phrases each time a petal was torn:

"I love you"
"a little"
"a lot"
"passionately"
"madly"
"not at all"

If there are more than 6 petals, you start over with "I love you" for 7 petals, "a little" for 8 petals and so on.
When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.
Your goal in this kata is to determine which phrase the girls would say at the last petal for a flower of a given number of petals. The number of petals is always greater than 0.

*/

#include <iostream>
#include <string>
using namespace std;

string how_much_i_love_you(int nb_petals) {
  string messages[] = {"I love you","a little", "a lot","passionately","madly","not at all" };
  
   int length = sizeof(messages) / sizeof(messages[0]);
  
  return messages[(nb_petals-1)%length];
}

