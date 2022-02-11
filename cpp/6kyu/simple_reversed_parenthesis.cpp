/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a3f2925b6cfd78fb0000040/train/cpp


Instructions:
Given a string, return the minimal number of parenthesis reversals needed to make balanced parenthesis. 

For example:
if-not:rust

solve(")(") = 2 Because we need to reverse ")" to "(" and "(" to ")". These are 2 reversals. 
solve("(((())") = 1 We need to reverse just one "(" parenthesis to make it balanced.
solve("(((") = -1 Not possible to form balanced parenthesis. Return -1.

if:rust

solve(")(") = Some(2) // Because we need to reverse ")" to "(" and "(" to ")". These are 2 reversals. 
solve("(((())") = Some(1) // We need to reverse just one "(" parenthesis to make it balanced.
solve("(((") = None // Not possible to form balanced parentheses.

Parenthesis will be either "(" or ")". 
More examples in the test cases. 
Good luck.

*/

using namespace std;

int solve(string s) {
  int length = s.length();
  
  if (length % 2) 
    return -1;
  
  stack<char> unbalancedStack;
  
  for (int i = 0; i < length; i++) {
    if (s[i] == ')' && !unbalancedStack.empty()) {
      if (unbalancedStack.top() == '(') {
        unbalancedStack.pop();
      } else {
        unbalancedStack.push(s[i]);
      }
    } else {
      unbalancedStack.push(s[i]);
    }
  }
  
  int reducedLength = unbalancedStack.size();
  int n = 0;
  
   while (!unbalancedStack.empty() && unbalancedStack.top() == '(') {
      unbalancedStack.pop();
      n++;
  }
  
  return (reducedLength / 2 + n % 2);
}
