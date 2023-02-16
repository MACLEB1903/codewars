/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/643af0fa9fa6c406b47c5399/train/java


Instructions:
Given a point in a [Euclidean plane](//en.wikipedia.org/wiki/Euclidean_plane) (x and y), return the quadrant the point exists in: 1, 2, 3 or 4 (integer). x and y are non-zero integers, therefore the given point never lies on the axes.

Examples:
(1, 2)     => 1
(3, 5)     => 1
(-10, 100) => 2
(-1, -9)   => 3
(19, -56)  => 4

There are four quadrants:
1. First quadrant, the quadrant in the top-right, contains all points with positive X and Y
2. Second quadrant, the quadrant in the top-left, contains all points with negative X, but positive Y
3. Third quadrant, the quadrant in the bottom-left, contains all points with negative X and Y
4. Fourth quadrant, the quadrant in the bottom-right, contains all points with positive X, but negative Y

More on quadrants: Quadrant (plane geometry) - Wikipedia)
Task Series
1. Quadrants _(this kata)_
2. Quadrants 2: Segments

*/

public class Kata {
  
  public static int quadrant(int x, int y) {
    return x > 0 ? y > 0 ? 1 : 4 : y > 0 ? 2 : 3;
  }
}