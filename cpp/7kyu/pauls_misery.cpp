/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57ee31c5e77282c24d000024/train/cpp


Instructions:
Paul is an excellent coder and sits high on the CW leaderboard. He solves kata like a banshee but would also like to lead a normal life, with other activities. But he just can't stop solving all the kata!!

Given an array (x) you need to calculate the Paul Misery Score. The values are worth the following points:

kata = 5
Petes kata = 10
life = 0
eating = 1

The Misery Score is the total points gained from the array. Once you have the total, return as follows:

< 40 = 'Super happy!'
< 70 >= 40 = 'Happy!'
< 100 >= 70 = 'Sad!'
> 100 = 'Miserable!'

*/

#include <string>
#include <vector>
using namespace std;

string paul(const vector<string>& x){
  map<string, int> pointsMap {{"kata", 5}, {"Petes kata", 10}, {"life", 0}, {"eating", 1}};
  
  int score = 0;
  
  for (string s : x){
    score += pointsMap[s];
  }
  
  if (score >= 100) return "Miserable!";
  if (score < 100 && score >= 70) return "Sad!";
  if (score < 70 && score >= 40) return "Happy!";
  
  return "Super happy!";
}
