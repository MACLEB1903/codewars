/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/java


Instructions:
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

a can contain numbers or strings. x can be either.

Return true if the array contains the value, false if not.

*/

public class Solution {
    public static boolean check(Object[] a, Object x) {
        for(int i=0; i<a.length; i++){
          if(a[i] == x){
            return true;
          }
        }
        return false;
    }
}