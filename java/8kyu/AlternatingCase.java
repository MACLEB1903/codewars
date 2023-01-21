/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/635b37978f20011cadcf169b/train/java


Instructions:
Alternating Case:
Given a random string containing characters of random case

example input: "AbcdEfg"
return the string with alternating case, starting with an uppercase character (furthest left):
example output: "AbCdEfG"

Note: input string will only contain letter characters (no spaces).

*/

public class StringUtils {
    public static String toAlternativeString(String string) {
        String result = "";
        for (char c : string.toCharArray()) {
            if(Character.isUpperCase(c)) {
                result += Character.toLowerCase(c);
            } else {
                result += Character.toUpperCase(c);
            }
        }
        return result;
    }
}