/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/java


Instructions:
Sentence Smash

Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

Example:
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'

Assumptions:
You can assume that you are only given words.
You cannot assume the size of the array.
You can assume that you do get an array.
What We're Testing

We're testing basic loops and string manipulation. This is for beginners who are just learning loops and string manipulation.

Disclaimer:
This is for beginners so we want to test basic loops and string manipulation. Advanced users should easily be able to do this in one line.

*/

Sentence Smashimport java.util.Arrays;public class SmashWords {	public static String smash(String... words) {
    String result ="";
    int counter = words.length;
    for(String word: words){
      result += word;
      if(counter > 1){
        result += " ";
      }
      counter--;
    }
    return result;
  }
}