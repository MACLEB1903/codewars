/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a97387e5ee396e70a00016d/train/cpp


Instructions:
$i$ is the imaginary unit, it is defined by $i² = -1$, therefore it is a solution to $x² + 1 = 0$.
Your Task

Complete the function pofi that returns $i$ to the power of a given non-negative integer in its simplest form, as a string (answer may contain $i$).

if:fortran

Note: Your returned character string is* not *permitted to contain redundant trailing whitespace.*

*/

using namespace std;

string pofi(unsigned n){
    return vector<string>{"1", "i", "-1", "-i"} [(n % 4)];
}
