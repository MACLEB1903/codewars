/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/javascript


Instructions:
Complete the solution so that it splits the string into strings of two characters in a list/array (depending on the language you use). If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

Examples:
'abc' =>  ['ab', 'c_']
'abcdef' => ['ab', 'cd', 'ef']


*/

function solution(str){
  const arr = [];
  
  for (const [i, x] of [...str].entries()){
    if (str.length-1 === i && i % 2 == 0) {
       arr.push(`${x}_`)
    }
    if (i % 2 ==1) {
      console.log(x)
      arr.push(`${str[i-1]}${x}`)
    }
  }
  return arr;
}


function solution(s){
   return (s+"_").match(/.{2}/g)||[]
}