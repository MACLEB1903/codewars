/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a34b80155519e1a00000009/train/java


Instructions:
Return a new array consisting of elements which are multiple of their own index in input array (length > 1).
Some cases: 

if-not:juliajavascript
[22, -6, 32, 82, 9, 25] =>  [-6, 32, 25]
[68, -1, 1, -7, 10, 10] => [-1, 10]
[-56,-85,72,-26,-14,76,-27,72,35,-21,-67,87,0,21,59,27,-92,68] => [-85, 72, 0, 68]

if:juliajulia
[22, -6, 32, 82, 9, 25] =>  [22, -6]
[68, -1, 1, -7, 10, 10] => [68, 10]
[-56,-85,72,-26,-14,76,-27,72,35,-21,-67,87,0,21,59,27,-92,68] => [-56, 72, 72, 0]

*/

import java.util.ArrayList;public class ZywOo {
    public static int[] multipleOfIndex(int[] array) {
        ArrayList<Integer> temp = new ArrayList<Integer>();
        for (int i = 1; i < array.length; i++) {
            if (array[i] % i == 0) {
                temp.add(array[i]);
            }
        }
        int[] done = new int[temp.size()];
        for (int i = 0; i < temp.size(); i++) {
            done[i] = temp.get(i);
        }
        return done;
    }
}