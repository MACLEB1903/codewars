/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/5772da22b89313a4d50012f7/train/cpp


Instructions:
Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

Use conditionals to return the proper message:
case	return
name equals owner	'Hello boss'
otherwise	'Hello guest'

*/

#include <string>
using namespace std;

string greet(const string& name, const string& owner) {
return "Hello " + string(name == owner ? "boss" : "guest");
}