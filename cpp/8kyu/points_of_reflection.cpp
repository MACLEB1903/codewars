/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://chatgpt.com/c/6881262c-66f8-800d-9e32-330f3ef6f794


Instructions:
"Point reflection" or "point symmetry" is a basic concept in geometry where a given point, P, at a given position relative to a mid-point, Q has a corresponding point, P1, which is the same distance from Q but in the opposite direction.

Task:
Given two points P and Q, output the symmetric point of point P about Q. Each argument is a two-element array of integers representing the point's X and Y coordinates. Output should be in the same format, giving the X and Y coordinates of point P1. You do not have to validate the input.

This kata was inspired by the Hackerrank challenge Find Point

*/

#include <utility>
using namespace std;

pair<int, int> symmetricPoint(const pair<int, int>& p, const pair<int, int>& q) {
    return {2 * q.first - p.first, 2 * q.second - p.second};
}
