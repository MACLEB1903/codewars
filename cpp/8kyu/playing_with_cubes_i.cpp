/* 

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/55c0a79e20be94c91400014b/train/cpp


Instructions:
Create a public class called Cube without a constructor which gets one single private integer variable Side, a getter GetSide() and a setter SetSide(int num) method for this property. Actually, getter and setter methods are not the common way to write this code in C#. In the next kata of this series, we gonna refactor the code and make it a bit more professional...

Notes:

There's no need to check for negative values!
initialise the side to 0.

*/

class Cube {
    private:
        int Side = 0;
    
    public:
        int GetSide() {
            return Side;
        }
    
        void SetSide(int num) {
            Side = num;
        }
    };
    