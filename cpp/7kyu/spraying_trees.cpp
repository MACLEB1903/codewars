/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5981a139f5471fd1b2000071/train/cpp


Instructions:
There are five workers : James, John, Robert, Michael and William. They work in a fixed order from Monday to Friday, and they rest on weekends. The order of work is as follows:
James works on Monday,
John works on Tuesday,
Robert works on Wednesday,
Michael works on Thursday,
William works on Friday.

Your task is to create a function that takes three arguments:
Weekday: The day of the week (e.g., Monday).
Number of Trees: The number of trees that must be sprayed on that day.
Cost per Litre: The cost of 1 litre of liquid needed to spray a tree. Assume that 1 tree requires 1 litre of liquid.

The total cost of the liquid to spray all trees is denoted as x.

The function should return a string in the following format: 

'It is (weekday) today, (name), you have to work, you must spray (number) trees and you need (x) dollars to buy liquid'

Example:
*Input : 
Weekday         : "Monday".
Number of Trees : 15
Cost per Litre  : 2
*Output: 

"It is Monday today, James, you have to work, you must spray 15 trees and you need 30 dollars to buy liquid."

*/

#include <string>
#include <map>
using namespace std;

string task(string day_of_week, int n, int c){
  map<string, string> workers {
    {"Monday", "James"},
    {"Wednesday", "Robert"},
    {"Friday", "William"},
    {"Tuesday", "John"},
    {"Thursday", "Michael"},
  };
  
  return "It is " + day_of_week + " today, " + workers[day_of_week] + ", you have to work, you must spray "
    + to_string(n) + " trees and you need " + to_string(n * c) + " dollars to buy liquid";
}
