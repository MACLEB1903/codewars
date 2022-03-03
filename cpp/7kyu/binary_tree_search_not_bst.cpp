/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5acc79efc6fde7838a0000a0/train/cpp


Instructions:
Given a number and a binary tree ( _not_ a Binary Search Tree! ):
return True/true if the given number is in the tree
return False/false if it isn't

if:javascript
Each node in the binary tree is either of this Node class or null:

javascript
class Node {
  constructor(value, left = null, right = null){
    this.value = value;
    this.left = left;
    this.right = right;
  }
}


if:lambdacalc
Encodings

purity: LetRec  
numEncoding: Scott  
export constructors Nil and Branch for your Tree encoding  
export deconstructor if for your Boolean encoding  

*/

struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};

bool search(int n, Node *root){
  if (!root)
   return false;
  
  if (root->val == n)
    return true;
  
  return search(n, root->right) || search(n, root->left);
}
