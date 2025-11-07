
: << "COMMENT"

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56dec885c54a926dcd001095/train/shell


Instructions:
Very simple, given a number, find its opposite (additive inverse).

Examples:

1: -1
14: -14
-34: 34

COMMENT


#!/bin/bash

bc <<< "-($1)"