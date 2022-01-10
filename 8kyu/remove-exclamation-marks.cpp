/*

Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

*/


#include <string>
#include <algorithm>

using namespace std;

string removeExclamationMarks(string str) {
    str.erase(remove(str.begin(), str.end(), '!'), str.end());
    return str;
}
