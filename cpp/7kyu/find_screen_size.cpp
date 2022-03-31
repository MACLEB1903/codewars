/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5bbd279c8f8bbd5ee500000f/train/cpp


Instructions:
Cheesy Cheeseman just got a new monitor! He is happy with it, but he just discovered that his old desktop wallpaper no longer fits. He wants to find a new wallpaper, but does not know which size wallpaper he should be looking for, and alas, he just threw out the new monitor's box. Luckily he remembers the width and the aspect ratio of the monitor from when Bob Mortimer sold it to him. Can you help Cheesy out?
The Challenge

Given an integer width and a string ratio written as WIDTH:HEIGHT, output the screen dimensions as a string written as WIDTHxHEIGHT.
Note: The calculated height should be represented as an integer. If the height is fractional, truncate it.

*/

#include <string>
using namespace std;

string find_screen_height(int width, const string &ratio){
    int index = ratio.find(":");
  
    int h = stoi(ratio.substr(0, index));
    int w = stoi(ratio.substr(index + 1));
  
    int height = (width * w) / h;
    
    return to_string(width) + "x" + to_string(height);
}
