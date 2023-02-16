/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/565f5825379664a26b00007c/train/java


Instructions:
Write a function that returns the total surface area and volume of a box.
The given input will be three positive non-zero integers: width, height, and depth.
The output will be language dependant, so please check sample tests for the corresponding data type, (list, tuple, struct, query, et cetera).

*/

public class Kata {
    public static int[] getSize(int w,int h,int d) {
        return new int[] { 2 * (w*h+h*d+d*w) , w*d*h};
    }
}