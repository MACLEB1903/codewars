/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5956a69343e2a8e67b00000a/train/typescript


Instructions:
Joey Greenhorn has a problem with his code. It is not returning the right values. Can you help him fix it?

a = 10
b = 20
a, b = swap(a, b)
print(a, b) # Should print out "20, 10", but "20, 20" gets printed out... HELP!

*/

function swap(a: number, b: number): [number, number] {
  return [b, a];
}
