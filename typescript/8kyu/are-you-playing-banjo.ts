/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53af2b8861023f1d88000832/train/typescript


Instructions:
Create a function which answers the question "Are you playing banjo?".
If your name starts with the letter "R" or lower case "r", you are playing banjo!

The function takes a name as its only argument, and returns one of the following strings:

name + " plays banjo" 
name + " does not play banjo"
Names given are always valid strings.

*/

export function areYouPlayingBanjo(name: string): string {
  return `${name} ${
    name[0] === "r" || name[0] === "R" ? "plays" : "does not play"
  } banjo`;
}
