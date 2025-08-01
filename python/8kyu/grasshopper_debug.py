"""

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/55cb854deb36f11f130000e1/train/python


Instructions:
Debug celsius converter

Your friend is traveling abroad to the United States so he wrote a program to convert fahrenheit to celsius. Unfortunately his code has some bugs.

Find the errors in the code to get the celsius converter working properly.

To convert fahrenheit to celsius:
celsius = (fahrenheit - 32) * (5/9)
Remember that typically temperatures in the current weather conditions are given in whole numbers. It is possible for temperature sensors to report temperatures with a higher accuracy such as to the nearest tenth. Instrument error though makes this sort of accuracy unreliable for many types of temperature measuring sensors.


"""

def weather_info(temperature):
    c = convert_to_celsius(temperature)
    if (c < 0):
        return f"{c} is freezing temperature"
    else:
        return f"{c} is above freezing temperature"
def convert_to_celsius(temperature):
    celsius = (temperature - 32) * (5 / 9)
    return celsius
 
