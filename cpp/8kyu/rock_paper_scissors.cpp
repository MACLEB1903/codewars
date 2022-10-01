/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5672a98bdbdd995fad00000f/train/cpp


Instructions:
Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"

*/

#include <string>
#include <vector>

using namespace std;

string rps(const string& p1, const string& p2) {
    vector<string> beats = { "rockscissors", "scissorspaper", "paperrock" };

    if (p1 == p2) return "Draw!";
    if (find(beats.begin(), beats.end(), p1 + p2) != beats.end())
        return "Player 1 won!";
    return "Player 2 won!";
}
