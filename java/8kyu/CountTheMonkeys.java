/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/java


Instructions:
You take your son to the forest to see the monkeys. You know that there are a certain number there (n), but your son is too young to just appreciate the full number, he has to start counting them from 1.
As a good parent, you will sit and count with him. Given the number (n), populate an array with all numbers up to and including that number, but excluding zero.

For example(Input --> Output):
10 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
1 --> [1]

*/

import static java.util.stream.IntStream.rangeClosed;
public class MonkeyCounter
{
  public static int[] monkeyCount(final int n){
    return rangeClosed(1, n).toArray();
  }
}