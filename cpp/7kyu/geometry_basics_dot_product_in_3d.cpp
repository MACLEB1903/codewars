/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58e3ea29a33b52c1dc0000c0/train/cpp


Instructions:
This series of katas will introduce you to basics of doing geometry with computers.
Vector objects have x, y, and z attributes.

if:prolog

Note: for prolog users: a record named vector is used.*
Write a function calculating dot product of Vector a and Vector b.
You can read more about dot product on Wikipedia.
Tests round answers to 6 decimal places.

*/

double dot_product(const Vector& a, const Vector& b){  
  double x = a.x * b.x;
  double y = a.y * b.y;
  double z = a.z * b.z;

  return x + y + z;
}
