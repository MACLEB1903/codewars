/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/515e188a311df01cba000003/train/javascript


Instructions:
The function is not returning the correct values. Can you figure out why?
getPlanetName(3); // should return 'Earth'

*/

function getPlanetName(id) {
  const planets = [
    "Mercury",
    "Venus",
    "Earth",
    "Mars",
    "Jupiter",
    "Saturn",
    "Uranus",
    "Neptune",
  ];
  return planets[id - 1];
}
