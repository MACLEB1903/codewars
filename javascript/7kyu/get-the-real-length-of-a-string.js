/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/599c4b69eb8e49effa000079/train/javascript


Instructions:
In languages that use UTF-16 encoding for strings (JavaScript, JVM languages like Java, .NET languages like C#...), if the code point of a character is larger than 0xFFFF, it will be treated as two code units.

For example:
The code point of the emoji 🙉 (U+1F649, Hear-No-Evil Monkey) is 0x1F649.
'🙉'.length // 

Write a function that returns the number of codepoints in a UTF-16 string.
"abcd"   --> 4
"🙉"     --> 1
"😸🦌🚀" --> 3

*/

function getRealLength(string) {
    return [...string].length; 
}