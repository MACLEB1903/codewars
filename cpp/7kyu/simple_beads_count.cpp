/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58712dfa5c538b6fc7000569/train/cpp


Instructions:
Two red beads are placed between every two blue beads. There are N blue beads. After looking at the arrangement below work out the number of red beads.

*/

unsigned int countRedBeads( unsigned int n ){
 if (n < 2)
    return 0;

  return n + (n - 2);
}
