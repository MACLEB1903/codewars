/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/54da539698b8a2ad76000228/train/cpp


Instructions:
You live in the city of Cartesia where all roads are laid out in a perfect grid.  You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk.  The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']).  You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point.  Return false otherwise.
Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only).  It will never give you an empty array (that's not a walk, that's standing still!).

*/

#include<vector>
using namespace std;

bool isValidWalk(vector<char> walk) {
  vector<int> n;
  vector<int> s;
  vector<int> w;
  vector<int> e;

  for (char c : walk) {
    switch(c) {
        case 'n':
          n.push_back(1);
          break;
        case 's':
          s.push_back(1);
          break;
        case 'w':
          w.push_back(1);
          break;
        case 'e':
          e.push_back(1);
          break;
    }
  }
  
  return (n.size() == s.size()) && (w.size() == e.size()) && walk.size() == 10;
}
