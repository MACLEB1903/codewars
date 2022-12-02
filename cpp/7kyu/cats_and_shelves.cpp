/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/62c93765cef6f10030dfa92b/train/cpp


Instructions:
Description
An infinite number of shelves are arranged one above the other in a staggered fashion.<br>
The cat can jump either one or three shelves at a time: from shelf i to shelf i+1 or i+3 (the cat cannot climb on the shelf directly above its head), according to the illustration:

┌────────┐
                 │-6------│
                 └────────┘
┌────────┐       
│------5-│        
└────────┘  ┌─────► OK!
            │    ┌────────┐
            │    │-4------│
            │    └────────┘
┌────────┐  │
│------3-│  │     
BANG!────┘  ├─────► OK! 
  ▲  |\_/|  │    ┌────────┐
  │ ("^-^)  │    │-2------│
  │ )   (   │    └────────┘
┌─┴─┴───┴┬──┘
│------1-│
└────────┘

Input:
Start and finish shelf numbers (always positive integers, finish no smaller than start)

Task:
Find the minimum number of jumps to go from start to finish

Example:
Start 1, finish 5, then answer is 2 (1 => 4 => 5 or 1 => 2 => 5)

*/

  
#include <cmath>

unsigned int Cats(unsigned int start, unsigned int finish){
  int difference = finish - start;
  
  return floor(difference / 3) + difference % 3;
}
