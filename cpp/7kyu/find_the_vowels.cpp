/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5680781b6b7c2be860000036/train/cpp


Instructions:
We want to know the index of the vowels in a given word, for example, there are two vowels in the word super (the second and fourth letters). 

So given a string "super", we should return a list of [2, 4].

	Some examples:
	Mmmm  => []
	Super => [2,4]
	Apple => [1,5]
	YoMama -> [1,2,4,6]
Notes:
Vowels in this context refers to: a e i o u y (including upper case)
This is indexed from [1..n] (not zero indexed!)

*/

#include <vector>
#include <string>
using namespace std;

vector<int> vowelIndices(const string& word){
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    vector<int> res;
  
    for (int i = 0; i < word.size(); i++){
      if (count(vowels.begin(), vowels.end(), tolower(word[i]))){
        res.push_back(i + 1);
      }
    }
  
    return res;
}
