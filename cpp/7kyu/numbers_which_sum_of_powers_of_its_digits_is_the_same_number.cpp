/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/560a4962c0cc5c2a16000068/train/cpp


Instructions:
Not considering number 1, the integer 153 is the first integer having this property:
the sum of the third-power of each of its digits  is equal to 153. Take a look:
153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153

The next number that experiments this particular behaviour is 370 with the same power.

Write the function eq_sum_powdig(), that finds the numbers below a given upper limit hMax (inclusive) that fulfills this property but with different exponents as the power for the digits.

eq_sum_powdig(hMax, exp): ----> sequence of numbers (sorted list) (Number one should not be considered).

Let's see some cases:
python
eq_sum_powdig(100, 2) ----> []

eq_sum_powdig(1000, 2) ----> []

eq_sum_powdig(200, 3) ----> [153]

eq_sum_powdig(370, 3) ----> [153, 370]
ruby
eq_sum_powdig(100, 2) ----> []

eq_sum_powdig(1000, 2) ----> []

eq_sum_powdig(200, 3) ----> [153]

eq_sum_powdig(370, 3) ----> [153, 370]
javascript
eqSumPowdig(100, 2) ----> []

eqSumPowdig(1000, 2) ----> []

eqSumPowdig(200, 3) ----> [153]

eqSumPowdig(370, 3) ----> [153, 370]

Enjoy it !!

*/

#include <vector>
#include <cmath>
using namespace std;

vector<int> eqSumPowdig(const int hMax, const int exp){
  vector<int> numbers;
  
  for (int i = 2; i <= hMax; ++i){
    int sum = 0;

    for (int num = i; num; num /= 10)
       sum += pow(num % 10 , exp);

    if (sum == i)
      numbers.push_back(sum);
  }

  return numbers;
}
