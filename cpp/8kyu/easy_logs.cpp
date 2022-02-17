/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5b68c7029756802aa2000176/train/cpp


Instructions:
Given a logarithm base X and two values A and B, return a sum of logratihms with the base X:

log(x)A + log(x)B


*/

#include <cmath>

double logs(double x, double a, double b) {
    return log(a) / log(x) + log(b) / log(x);
}
