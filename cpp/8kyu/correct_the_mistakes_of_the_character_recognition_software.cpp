/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp


Instructions:
Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.
When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

Your task is correct the errors in the digitised text. You only have to handle the following mistakes:
S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1

The test cases contain numbers only by mistake.

*/

#include <string>
using namespace std;

string correct(string str){
    for (char &c : str){
        if (c == '5') c = 'S';
        else if (c == '0') c = 'O';
        else if (c == '1') c = 'I';
    }
  return str;
}