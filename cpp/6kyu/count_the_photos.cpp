/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/6319dba6d6e2160015a842ed/train/cpp


Instructions:
In a string we describe a road. There are cars that move to the right and we denote them with ">" and cars that move to the left and we denote them with "<". There are also cameras that are indicated by: " . ". 
A camera takes a photo of a car if it moves to the direction of the camera.
Your Task: is to write a function such that, for the input string that represents a road as described, returns the total number of photos that were taken by the cameras. The complexity should be strictly O(N) in order to pass all the tests. 

javascript:
For ">>." -> 2 photos were taken
For ".>>" -> 0 photos were taken
For ">.<." -> 3 photos were taken
For ".><.>>.<<" -> 11 photos were taken

*/

#include <string>
using namespace std;

unsigned long long countPhotos(const string& road) {
  int res = 0;
  int cars = 0;
  int cameras = 0;
  
  for (char c : road) {
    if (c == '>') {
      cars += 1;
    }
    if (c == '.') {
      res += cars;
      cameras += 1;
    }
    if (c == '<') {
      res += cameras;
    }
  }
  
  return res;
}
