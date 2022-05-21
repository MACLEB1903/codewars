/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5ae7e3f068e6445bc8000046/train/cpp


Instructions:
Scenario 
You're saying good-bye your best friend* , See you next happy year . 
Happy Year is the year with only distinct digits, (e.g) 2018

Task:
Given a year, Find The next happy year or The closest year You'll see your best friend       

Notes:
Year Of Course always Positive .
Have no fear, It is guaranteed that the answer exists
It's not necessary that the year passed to the function is Happy one
Input Year with in range (1000  ≤  y  ≤  9000)

Input >> Output Examples:

nextHappyYear (7712) ==> return (7801)
next_happy_year(7712, 7801).
Explanation:
As the _Next closest year with only distinct digits is_  *7801* . 

cpp
nextHappyYear (8989) ==> return (9012)
prolog
next_happy_year(8989, 9012).

Explanation:
As the _Next closest year with only distinct digits is_  *9012* . 


cpp
nextHappyYear (1001) ==> return (1023)
prolog
next_happy_year(1001, 1023).

Explanation
As the _Next closest year with only distinct digits is_  *1023* .

Playing with Numbers Series
Playing With Lists/Arrays Series
For More Enjoyable Katas

ALL translations are welcomed
Enjoy Learning !!
Zizou

*/

#include <set>
using namespace std;

unsigned short int nextHappyYear (unsigned short int year){
  for (; year++ ;)
  {
    set<int> s;
    s.insert(year / 1000);
    s.insert(year / 100 % 10);
    s.insert(year / 10 % 10);
    s.insert(year % 10);
    
    if (s.size() == 4)
      return year;
  }
}
