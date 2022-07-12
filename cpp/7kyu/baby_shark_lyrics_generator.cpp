/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5d076515e102162ac0dc514e/train/cpp


Instructions:
Baby Shark Lyrics

Create a function, as short as possible, that returns this lyrics.  
Your code should be less than 300 characters. 
Watch out for the three points at the end of the song. 

Baby shark, doo doo doo doo doo doo
Baby shark, doo doo doo doo doo doo
Baby shark, doo doo doo doo doo doo
Baby shark!

Mommy shark, doo doo doo doo doo doo
Mommy shark, doo doo doo doo doo doo
Mommy shark, doo doo doo doo doo doo
Mommy shark!

Daddy shark, doo doo doo doo doo doo
Daddy shark, doo doo doo doo doo doo
Daddy shark, doo doo doo doo doo doo
Daddy shark!

Grandma shark, doo doo doo doo doo doo
Grandma shark, doo doo doo doo doo doo
Grandma shark, doo doo doo doo doo doo
Grandma shark!

Grandpa shark, doo doo doo doo doo doo
Grandpa shark, doo doo doo doo doo doo
Grandpa shark, doo doo doo doo doo doo
Grandpa shark!

Let's go hunt, doo doo doo doo doo doo
Let's go hunt, doo doo doo doo doo doo
Let's go hunt, doo doo doo doo doo doo
Let's go hunt!

Run away,…

*/

using namespace std;

string baby_shark_lyrics(){
  string as[] = {"Baby shark","Mommy shark","Daddy shark","Grandma shark","Grandpa shark","Let's go hunt"};
  string r;
  
  for (auto s:as)
  {
      for (int i=0; i<3; i++)
      r+=s+", doo doo doo doo doo doo\n";
    r+=s+"!\n";}
  return r+"Run away,…";}
