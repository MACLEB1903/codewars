/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/cpp


Instructions:
Given three integers a, b, and c, return the largest number obtained after inserting the operators +, *, and parentheses (). In other words, try every combination of a, b, and c with the operators, without reordering the operands, and return the maximum value.

Example
With the numbers 1, 2, and 3, here are some possible expressions:

1 * (2 + 3) = 5
1 * 2 * 3 = 6
1 + 2 * 3 = 7
(1 + 2) * 3 = 9

The maximum value that can be obtained is 9.

*/

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    unsigned short int res1 = a + b + c;
    unsigned short int res2 = a * b * c;
    unsigned short int res3 = (a + b) * c;
    unsigned short int res4 = a * (b + c);
    unsigned short int res5 = a + (b * c);
    unsigned short int res6 = (a * b) + c;

    return std::max({res1, res2, res3, res4, res5, res6});
}
