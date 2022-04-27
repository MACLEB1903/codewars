/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5e16ffb7297fe00001114824/train/cpp


Instructions:
You work in the best consumer electronics corporation, and your boss wants to find out which three products generate the most revenue.

Given 3 lists of the same length like these:
products: ["Computer", "Cell Phones", "Vacuum Cleaner"]
amounts: [3, 24, 8]
prices: [199, 299, 399]

Return the three product names with the highest revenues (amount * price), in descending order (highest to lowest revenue).

Note: if multiple products have the same revenue, order them according to their original positions in the input list.

*/

#include <string>
#include <vector>
using namespace std;

vector<string> top3(
        const vector<string>& products,
        const vector<int>& amounts,
        const vector<int>& prices){
  vector<pair<string, int>> result;
	
  for (int i = 0; i < (int) products.size(); ++i){
		result.push_back({products[i], amounts[i] * prices[i]});
	}
  
	sort(result.begin(), result.end(), [&](auto i, auto j){
    return i.second > j.second;
  });

  return {result[0].first, result[1].first, result[2].first};}
