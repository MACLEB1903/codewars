/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/cpp


Instructions:
You might know some pretty large perfect squares. But what about the NEXT one?
Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter. Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.  

If the argument is itself not a perfect square then return either -1 or an empty value like None or null, depending on your language. You may assume the argument is non-negative.
Example: ( Input --> Output )

121 --> 144
625 --> 676
114 --> -1  #  because 114 is not a perfect square

if:lambdacalc
Encodings

purity: LetRec  
numEncoding: BinaryScott  

Note: the empty return value is 0, which is otherwise not a possible valid answer.

*/

#include <math.h>

long int findNextSquare(long int sq){
  long square = sqrt(sq);
  
  if (square * square != sq)
    return -1;
  
  return pow(++square, 2);
}
