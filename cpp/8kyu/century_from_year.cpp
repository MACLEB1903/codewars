/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp


Instructions:
Return the century of the input year. The input will always be a 4 digit string, so there is no need for validation.

Examples
"1999" --> "20th"
"2011" --> "21st"
"2154" --> "22nd"
"2259" --> "23rd"
"1124" --> "12th"
"2000" --> "20th"

*/

#include <cmath>

int centuryFromYear(int year) {
  return ceil(year/100.0) ;
}