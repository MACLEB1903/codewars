/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57e3f79c9cb119374600046b/train/typescript


Instructions:
Define a method hello that returns "Hello, Name!" to a given name, or says Hello, World! if name is not given (or passed as an empty String).

Assuming that name is a String and it checks for user typos to return a name with a first capital letter (Xxxx).

Examples:
hello "john"   => "Hello, John!"
hello "aliCE"  => "Hello, Alice!"
hello          => "Hello, World!" # name not given
hello ''       => "Hello, World!" # name is an empty String

*/

function hello(name?: string): string {
  return `Hello, ${
    name ? name[0].toUpperCase() + name.slice(1).toLowerCase() : "World"
  }!`;
}
