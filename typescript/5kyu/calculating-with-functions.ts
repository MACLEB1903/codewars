/*

This time we want to write calculations using functions and get the results. Let's have a look at some examples:

seven(times(five())); // must return 35
four(plus(nine())); // must return 13
eight(minus(three())); // must return 5
six(dividedBy(two())); // must return 3
Requirements:

There must be a function for each number from 0 ("zero") to 9 ("nine")
There must be a function for each of the following mathematical operations: plus, minus, times, dividedBy
Each calculation consist of exactly one operation and two numbers
The most outer function represents the left operand, the most inner function represents the right operand
Division should be integer division. For example, this should return 2, not 2.666666...:
eight(dividedBy(three()));

*/

type FunctionType = {
  func: (params: number) => number;
};

function zero(func?: FunctionType): number {
  return func ? func.func(0) : 0;
}

function one(func?: FunctionType): number {
  return func ? func.func(1) : 1;
}

function two(func?: FunctionType): number {
  return func ? func.func(2) : 2;
}

function three(func?: FunctionType): number {
  return func ? func.func(3) : 3;
}

function four(func?: FunctionType): number {
  return func ? func.func(4) : 4;
}

function five(func?: FunctionType): number {
  return func ? func.func(5) : 5;
}

function six(func?: FunctionType): number {
  return func ? func.func(6) : 6;
}

function seven(func?: FunctionType): number {
  return func ? func.func(7) : 7;
}

function eight(func?: FunctionType): number {
  return func ? func.func(8) : 8;
}

function nine(func?: FunctionType): number {
  return func ? func.func(9) : 9;
}

function plus(b: number): (a: number) => number {
  return (a) => a + b;
}

function minus(b: number): (a: number) => number {
  return (a) => a - b;
}

function times(b: number): (a: number) => number {
  return (a) => a * b;
}

function dividedBy(b: number): (a: number) => number {
  return (a) => Math.floor(a / b);
}
