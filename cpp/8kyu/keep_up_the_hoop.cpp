/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55cb632c1a5d7b3ad0000145/train/cpp


Instructions:
Alex just got a new hula hoop, he loves it but feels discouraged because his little brother is better than him.

Write a program where Alex can input (n) how many times the hoop goes round and it will return him an encouraging message:

If Alex gets 10 or more hoops, return the string "Great, now move on to tricks".
If he doesn't get 10 hoops, return the string "Keep at it until you get it".

*/

#include <string>

using namespace std;

string hoop_count(unsigned n) {
    return n >= 10 ? "Great, now move on to tricks" : "Keep at it until you get it";
}
