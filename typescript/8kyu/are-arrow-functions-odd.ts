/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/559f80b87fa8512e3e0000f5/train/typescript


Instructions:
Time to test your basic knowledge in functions! Return the odds from a list:

odds([1,2,3,4,5]) #=> [1,3,5]

*/

export function odds(values: number[]): number[] {
  return values.filter((x) => x % 2 != 0);
}
