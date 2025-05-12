/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/58261acb22be6e2ed800003a/train/typescript


Instructions:
Bob needs a fast way to calculate the volume of a cuboid with three values: length, width and the height of the cuboid. Write a function to help Bob with this calculation.

Ruby: def get_volume_of_cuboid(length, width, height) Bash: bash run_shell length width height

*/

const Kata = {
  getVolumeOfCuboid: (length: number, width: number, height: number): number =>
    length * width * height,
};
