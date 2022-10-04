/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac/train/cpp


Instructions:
Task:
*_Given_  *Two integers a , b* , _find_  *The sum of them*  , _BUT_  _You are not allowed to use the operators + and -_
___
Notes
_The numbers_  *(a,b) may be positive , negative values or zeros* . 
_Returning value_ will be an _integer_ .

if:javascript
_Javascript:_ the Array _reduce_ methods are disabled, along with _eval_, _require_, and _module_ .

if:java
_Java:_ the following methods are prohibited: _addExact_, _average_, _collect_, _decrement_, _increment_, _nextAfter_, _nextDown_, _nextUp_, _reduce_, _subtractExact_, _sum_, _summing_ . The following classes are prohibited: _BigDecimal_ and _BigInteger_ .

if:nasm
_NASM:_ the following instructions are prohibited: _add_, _adc_, _adcx_, _adox_, _dec_, _inc_, _lea_, _sbb_, _sub_ . 

if:julia
_Julia:_ +, -, sum, cumsum, diff, run, muladd, fma, count, Symbol and Expr are _disabled_.

if:forth
_Forth:_ Expect unexpected results if you use forbidden operators.

if:php
_PHP:_ the following functions are prohibited: _array_sum_, _array_map_, _eval_, _exec_, _shell_exec_, _system_, _passthru_, _proc_\*_, _popen_, _bc\*_, _gmp_\*_, modify (of DateTime), Date. Additionally, calling functions using string interpolation is also banned, i.e. ("func")() or $obj->{"func"}(). See test cases here: <a>https://regex101.com/r/skHT0f/latest</a>

if:rust
_Rust:_ +, -, add(), checked_add(), overflowing_add(), wrapping_add(), add_assign(), sub(), checked_sub(), overflowing_sub(), wrapping_sub(), sub_assign(), sum() and importing other crates using use is prohibited.

if:clojure
_clojure:_ +, -, (inc), (dec), (range), (reduce), (eval), (map) are prohibited.

Input >> Output Examples
1- Add (5,19) ==> return (24) 
2- Add (-27,18) ==> return (-9)
3- Add (-14,-16) ==> return (-30)

*/

int Add (int x, int y)
{
    while (y != 0)
    {
        unsigned tmp = x & y;
      
        x = x ^ y;
      
        y = tmp << 1;
    }
  
    return x;
}
