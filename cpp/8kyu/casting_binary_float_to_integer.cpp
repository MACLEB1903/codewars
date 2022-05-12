/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5f1804560873b20023e8244a/train/cpp


Instructions:
For beginners!

You are given a 32-bit float (single precision).

Return the number a signed 32-bit integer would hold with the same bit pattern.

10.0 (float) == 01000001001000000000000000000000 (binary)
convert_to_int(10.0) returns 1092616192
Visualization: https://www.h-schmidt.net/FloatConverter/IE

*/

#include <cstring>

int convert_to_int(float f) {
    int result;
    std::memcpy(&result, &f, sizeof(float));
    return result;
}
