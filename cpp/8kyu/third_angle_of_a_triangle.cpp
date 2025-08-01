/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5a023c426975981341000014/train/cpp


Instructions:
You are given two interior angles (in degrees) of a triangle.

Write a function to return the 3rd.

Note: only positive integers will be tested.

https://en.wikipedia.org/wiki/Triangle

*/


class Triangle {
public:
    static int otherAngle(int a, int b) {
        return 180 - (a + b);
    }
};
