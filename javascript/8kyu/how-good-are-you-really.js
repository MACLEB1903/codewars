/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5601409514fc93442500010b/train/javascript


Instructions:
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.
You receive an array with your peers' test scores. Now calculate the average and compare your score!
Return true if you're better, else false!

Note:
Your points are not included in the array of your class's points. Do not forget them when calculating the average score!

*/

function betterThanAverage(classPoints, yourPoints) {
  return (
    classPoints.reduce((sum, n) => (sum += n)) / classPoints.length < yourPoints
  );
}
