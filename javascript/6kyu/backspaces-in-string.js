/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5727bb0fe81185ae62000ae3/train/typescript


Instructions:
Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"
Your task is to process a string with "#" symbols.

Examples:
"abc#d##c"      ==>  "ac"
"abc##d######"  ==>  ""
"#######"       ==>  ""
""              ==>  ""

*/

export function cleanString(s) {
	const arr = [];
	for (const char of [...s]) char == "#" ? arr.pop()  : arr.push(char);
	
	return arr.join("");
}
