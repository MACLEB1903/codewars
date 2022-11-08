/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/581e476d5f59408553000a4b/train/cpp


Instructions:
Implement the method length, which accepts a linked list (head), and returns the length of the list.

For example:
Given the list: 1 -> 2 -> 3 -> 4, length should return 4.

The linked list is defined as follows:

javascript
function Node(data, next = null){
  this.data = data;
  this.next = next;
}

java
class Node {
  public Object data;
  public Node next;

  Node(T data, Node next){
    this.data = data;
    this.next = next;
  }
  
  Node(T data){
    this(data, null);
  }
}

php
class Node {
  public $data, $next;
  public function __construct($data, $next = NULL){
    $this->data = $data;
    $this->next = $next;
  }
}

python
class Node:
    def __init__(self, data, next=None): 
        self.data = data
        self.next = next

cpp
template <class T>
class Node
{
public:
    T data;
    Node *next;
    Node(T x, Node *p = NULL) : data(x), next(p){}
    Node() : next(NULL){}
};

c
typedef struct node_t {
    void *data;
    struct node_t *next;
} Node;
nasm
typedef struct node_t {
    void *data;
    struct node_t *next;
} Node;

Note: the list may be null and can hold any type of value.

*/

template <class T>
int length(const Node<T> *head){
  int tails = 0;

  while(head)
  {
    head = head->next;
    ++tails;
  }

  return tails;
}
