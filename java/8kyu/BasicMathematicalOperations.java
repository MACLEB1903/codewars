/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/java


Instructions:
Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).  
The function should return result of numbers after applying the chosen operation.

Examples(Operator, value1, value2) --> output

if-not:nasm
('+', 4, 7) --> 11
('-', 15, 18) --> -3
('*', 5, 5) --> 25
('/', 49, 7) --> 7


if:nasm
nasm
mov dil, '+'
mov rax, __float64__(4.0)
mov rdx, __float64__(7.0)
movq xmm0, rax
movq xmm1, rdx
call basic_op        ; XMM0 <- 11.0

mov dil, '-'
mov rax, __float64__(15.0)
mov rdx, __float64__(18.0)
movq xmm0, rax
movq xmm1, rdx
call basic_op        ; XMM0 <- -3.0

mov dil, '*'
mov rax, __float64__(5.0)
movq xmm0, rax
movq xmm1, rax
call basic_op        ; XMM0 <- 25.0

mov dil, '/'
mov rax, __float64__(49.0)
mov rdx, __float64__(7.0)
movq xmm0, rax
movq xmm1, rdx
call basic_op        ; XMM0 <- 7.0

*/

public class BasicOperations{
  public static Integer basicMath(String op, int v1, int v2){
    if(op == "+"){
      return v1+v2;
    }else if(op == "-"){
      return v1-v2;
    }else if(op == "*"){
      return v1*v2;
    }else if(op == "/"){
      return v1/v2;
    }
    return null;
  }
}