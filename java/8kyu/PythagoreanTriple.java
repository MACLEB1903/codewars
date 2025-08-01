/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5951d30ce99cf2467e000013/train/java


Instructions:
Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean Triple using those 3 integers.

A Pythagorean Triple consists of arranging 3 integers, such that:
*a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>

Examples:
[5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers:
 3<sup>2</sup> + 4<sup>2</sup> = 5<sup>2</sup>
 
[3, 4, 5] : it is possible to form a Pythagorean Triple using these 3 integers:
 3<sup>2</sup> + 4<sup>2</sup> = 5<sup>2</sup>

[13, 12, 5] : it is possible to form a Pythagorean Triple using these 3 integers:
 5<sup>2</sup> + 12<sup>2</sup> = 13<sup>2</sup>
 
[100, 3, 999] : it is NOT possible to form a Pythagorean Triple using these 3 integers - no matter how you arrange them, you will never find a way to satisfy the equation a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>


Return Values:
For Python: return True or False
For JavaScript: return true or false
Other languages: return 1 or 0 or refer to Sample Tests.

*/

import java.util.Arrays;public class PythagoreanTriple {
	public int pythagoreanTriple(int[] triple){
        return triple[0] * triple[0] + triple[1] * triple[1] == triple[2] * triple[2] ? 1 : 0;
	}
}