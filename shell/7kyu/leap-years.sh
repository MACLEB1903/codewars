: << "COMMENT"

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/526c7363236867513f0005ca/train/shell


Instructions:
In this kata you should simply determine, whether a given year is a leap year or not. In case you don't know the rules, here they are:

Years divisible by 4 are leap years,
but years divisible by 100 are not leap years,
but years divisible by 400 are leap years.
Tested years are in range 1600 ≤ year ≤ 4000.

Echo out 1 if year passed in is a leap year, or 0 otherwise.

COMMENT

#!/bin/bash
echo $(($1 % 400 == 0 || ($1 % 4 == 0 && $1 % 100 != 0) ? 1 : 0))