/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55c28f7304e3eaebef0000da/train/cpp


Instructions:
Oh no, Timmy's created an infinite loop! Help Timmy find and fix the bug in his unfinished for loop!

*/

using namespace std;
vector<int> createVector(const int n){
	vector<int> res;

	for (int i = 1; i <= n; i++){
		res.push_back(i);
	}

	return res;
}