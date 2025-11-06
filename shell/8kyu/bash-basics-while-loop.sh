
: << "COMMENT"

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/582cd9033c1acf1d45000052/train/shell


Instructions:
Create a simple while loop in bash that prints the numbers 1-20 to stdout.

It should look like (stdout):
Count: 1
Count: 2
...
Count: 20

COMMENT


#!/bin/bash

countToTwenty() {
  for i in {1..20}; 
  do
    echo "Count: $i"
    done
}

countToTwenty