/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5b61d6ef07a266d40b000097/train/typescript


Instructions:
Create a resolved javascript Promise that will return 'Hello World!'.

*/

export async function promiseHelloWorld(): Promise<string> {
  return await Promise.resolve("Hello World!");
}
