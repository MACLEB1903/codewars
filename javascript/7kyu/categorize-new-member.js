/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa/train/javascript


Instructions:
The Western Suburbs Croquet Club has two categories of membership, Senior and Open. They would like your help with an application form that will tell prospective members which category they will be placed.
To be a senior, a member must be at least 55 years old and have a handicap greater than 7. In this croquet club, handicaps range from -2 to +26; the better the player the lower the handicap.

*/

function openOrSenior(data) {
  return data.map((d) => (d[0] >= 55 && d[1] > 7 ? "Senior" : "Open"));
}
