/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5bb904724c47249b10000131/train/cpp


Instructions:
Our football team has finished the championship.
Our team's match results are recorded in a collection of strings. Each match is represented by a string in the format "x:y", where x is our team's score and y is our opponents score.

For example: ["3:1", "2:2", "0:1", ...]

Points are awarded for each match as follows:

if x > y: 3 points (win)
if x < y: 0 points (loss)
if x = y: 1 point (tie)
We need to write a function that takes this collection and returns the number of points our team (x) got in the championship by the rules given above.

Notes:

our team always plays 10 matches in the championship
0 <= x <= 4
0 <= y <= 4

*/

#include <string>
#include <array>
using namespace std;

int points(const array<string, 10>& games) {
    int total_points = 0;
    for (const string& score : games) {
        int x = stoi(score.substr(0, 1));
        int y = stoi(score.substr(2, 1));
      
      total_points += x == y ? 1 : x > y ? 3 : 0;
  }
  return total_points;
}