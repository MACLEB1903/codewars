/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp


Instructions:
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

*/

int simpleMultiplication(int a){
    return (a * (a%2 == 0 ? 8 : 9));
}
