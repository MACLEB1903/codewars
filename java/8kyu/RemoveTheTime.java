/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/56b0ff16d4aa33e5bb00008e/train/java


Instructions:
You're re-designing a blog, and the blog's posts have the Weekday Month Day, time format for showing the date and time when a post was made, e.g., Friday May 2, 7pm.
You're running out of screen real estate, and on some pages you want to display a shorter format, Weekday Month Day that omits the time.
Write a function that takes the website date/time in its original string format and returns the shortened format.

Input:
Input will always be a string, e.g., "Friday May 2, 7pm". 

Output:
Output will be the shortened string, e.g., "Friday May 2".

*/

public class Solution {
  public static String shortenToDate(String longDate) {
    return longDate.split(",")[0];
  }
}