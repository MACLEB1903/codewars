/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53697be005f803751e0015aa/train/typescript


Instructions:
Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5

For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.
For example, decode("h3 th2r2") would return "hi there".
For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.

*/

// turn vowels into numbers
export function encode(string: string): string {
  const vowels = "aeiou";
  return [...string].map(l => vowels.includes(l) ? vowels.indexOf(l)+1 : l).join("");
}

// turn numbers back into vowels
export function decode(string: string): string {
   const vowels = "aeiou";
  return [...string].map(l => Number(l) > 0 ? vowels[Number(l)-1]: l).join("");
}
