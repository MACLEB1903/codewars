/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/557b5e0bddf29d861400005d/train/java


Instructions:
Sometimes, I want to quickly be able to convert miles per imperial gallon (mpg) into kilometers per liter (kpl).

Create an application that will display the number of kilometers per liter (output) based on the number of miles per imperial gallon (input).

if-not:javascript,swift
Make sure to round off the result to two decimal points.
if:javascript,swift
Your answer should be accurate within 0.01 kpl.

Some useful associations relevant to this kata:
1 Imperial Gallon = 4.54609188 litres  
1 Mile = 1.609344 kilometres

*/

import java.math.BigDecimal;public class Converter {    public static float mpgToKPM(final float mpg) {
        return BigDecimal.valueOf(mpg * 1.609344f / 4.54609188f).setScale(2, BigDecimal.ROUND_HALF_UP).floatValue();
    }
}