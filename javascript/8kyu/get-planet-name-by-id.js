/*

Description:
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
