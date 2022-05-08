/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/cpp


Instructions:   
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.
a can contain numbers or strings. x can be either.
Return true if the array contains the value, false if not.

*/



using namespace std;        
bool check(const vector<string>& seq, const string& elem) {
    return any_of(begin(seq), end(seq), [&](string i) { return i == elem; });
}


bool check(const vector<string>& seq, const string& elem) {
    for(auto i:seq) if(i==elem)return 1;
    return 0;
  }