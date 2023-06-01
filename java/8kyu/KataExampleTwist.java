/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/525c1a07bb6dda6944000031/train/java


Instructions:
This is an easy twist to the example kata (provided by Codewars when learning how to create your own kata). 
Add the value "codewars" to the array websites 1,000 times.

*/

public class KataExampleTwist
{
    public static String[] kataExampleTwist()
    {
        return "codewars,".repeat(1000).split(",");
    }
}