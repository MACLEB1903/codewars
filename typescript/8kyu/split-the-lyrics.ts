/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5963b6f8a7000805ce000064/train/typescript


Instructions:
Take a lyric that will be input into the function and split the words up into individual elements in a string.

Examples:
lyricSplit("There's no such thing as a life that's better than yours") // => ["There's", "no", "such", "thing", "as", "a", "life" ,"that's" ,"better", "than", "yours"]
lyricSplit("I know you still think about the times we had") // => ["I", "know", "you", "still", "think", "about", "the", "times", "we", "had"];

*/

export function lyricSplit(lyric: string): string[] {
  return lyric.split(` `);
}
