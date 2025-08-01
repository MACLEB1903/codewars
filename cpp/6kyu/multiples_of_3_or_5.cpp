/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp


Instructions:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in. 

if:c,cobol,commonlisp,cpp,csharp,dart,elixir,factor,fsharp,javascript,julia,kotlin,lua,nasm,php,prolog,python,raqcket,ruby,rust,shell,swift,typescript,vb
Additionally, if the number is negative, return 0.

Note: If the number is a multiple of both 3 and 5, only count it *once*.
Courtesy of projecteuler.net (Problem 1)*

*/

int solution(int number) 
{
	int sum = 0;
  
  for (int n = 3; n < number; ++n)
  {
  	if ((n % 3 == 0) || (n % 5 == 0))
    	sum += n;
  }

  return sum;
}
