/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/javascript


Instructions:
Write function isPalindrome that checks if a given string (case insensitive) is a palindrome.

In Racket, the function is called palindrome?

(palindrome? "nope") ; returns #f
(palindrome? "Yay")  ; returns #t

*/

function isPalindrome(x) {
  x = x.toLowerCase();
  return x === x.split``.reverse().join``;
}
