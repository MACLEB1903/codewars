/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source: 
https://www.codewars.com/kata/57a77726bb9944d000000b06/train/cpp


Instructions:
Accountant time! For a given quantity and price (per mango), calculate the total cost of the mangoes.
But! Every third mango is free!

Examples
# 🥭 : Paid mango
# 🆓 : Free mango

Quantity = 2
Price = 3
Total cost ==> 6    
# Paid 2 mangoes for $3 per unit = $6; no mango for free
# 🥭🥭

Quantity = 3
Price = 3
Total cost ==> 6    
# Paid 2 mangoes for $3 per unit = $6; +1 mango for free
# 🥭🥭🆓

Quantity = 5
Price = 3
Total cost ==> 12   
# Paid 4 mangoes for $3 per unit = $12; +1 mango for free
# 🥭🥭🆓   🥭🥭

Quantity = 9
Price = 5
Total cost ==> 30   
# Paid 6 mangoes for $5 per unit = $30; +3 mangoes for free
# 🥭🥭🆓   🥭🥭🆓   🥭🥭🆓

*/

#include <cmath>

int mango(int quantity, int price){
    return (quantity - floor(quantity/3)) * price;
}