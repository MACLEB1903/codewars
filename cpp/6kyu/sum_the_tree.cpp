/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5800580f8f7ddaea13000025/train/cpp


Instructions:
Given a node object representing a binary tree:

javascript
Node:
  value: <int>,
  left: <Node> or null,
  right: <Node> or null
c
Node:
  value: <int>,
  left: <Node> or null,
  right: <Node> or null
cpp
struct node
{
  int value;
  node* left;
  node* right;
}
csharp
public class Node
{  
    public int Value;  
    public Node Left;  
    public Node Right;
    
    public Node(int value, Node left = null, Node right = null)
    {
      Value = value;
      Left = left;
      Right = right;
    }
}

write a function that returns the sum of all values, including the root. Absence of a node will be indicated with a null value.

Examples:
10
| \
1  2
=> 13

1
| \
0  0
    \
     2
=> 3

*/

int sumTheTreeValues(node* root) {
  if (!root) return 0;
  
  int sum = root->value;
  
  sum += sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
  
  return sum;
}
