/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a05fe8a06d5b6208e00010b/train/cpp


Instructions:
Get the number n to return the sequence from n to 1.
The number n can be negative and also large number. (See the range as the following)

Example:
n=5  >> [5,4,3,2,1]
n=-1 >> [-1,0,1]

Range :
Python     -9999 < n < 9999
Javascript -9999 < n < 9999
c++        -9999 < n < 9999
Crystal    -9999 < n < 9999
Ruby       -9999 < n < 9999

*/

using namespace std;

vector<int> seqToOne(int n){
  vector<int> result;

  if (n > 0)
  {
    for (int i = n; i >= 1; --i){
      result.push_back(n--);
    }
  } else {
    for (int i = n; i <= 1; ++i){
      result.push_back(n++);
    }
  }
  
  return result;
}
