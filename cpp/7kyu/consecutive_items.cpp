/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5f6d533e1475f30001e47514/train/cpp


Instructions:
You are given a list of unique integers arr, and two integers a and b. Your task is to find out whether or not a and b appear consecutively in arr, and return a boolean value (True if a and b are consecutive, False otherwise). 
It is guaranteed that a and b are both present in arr.

if:lambdacalc
Encodings

purity: LetRec  
numEncoding: BinaryScott  

export constructors nil, cons for your List encoding, and deconstructor if for your Boolean encoding.

*/

#include <cmath>
using namespace std;

bool consecutive(vector<int>arr, int a,int b){  
  int aPos = find(arr.begin(), arr.end(), a) - arr.begin();
	int bPos = find(arr.begin(), arr.end(), b) - arr.begin();
  
	return abs(aPos - bPos) == 1;
}
