/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/515e188a311df01cba000003/train/typescript


Instructions:
The function is not returning the correct values. Can you figure out why?

getPlanetName(3); // should return 'Earth'

*/

export function getPlanetName(id: number): string {
  const planets: string[] = [
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
