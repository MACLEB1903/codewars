/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/java


Instructions:
Given an array of integers your solution should find the smallest integer. 

For example:
Given [34, 15, 88, 2] your solution will return 2
Given [34, -345, -1, 100] your solution will return -345

You can assume, for the purpose of this kata, that the supplied array will not be empty.

*/

public class SmallestIntegerFinder {
    public static int findSmallestInt(int[] args) {
      int smallest = args[0];
      for(int i=0; i<args.length; i++){
        if(smallest > args[i]){
          smallest = args[i];
        }
      }
      return smallest;
    }
}