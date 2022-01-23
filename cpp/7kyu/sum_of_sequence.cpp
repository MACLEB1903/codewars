/*

Author: MARCEL EBALLAR
GitHub: https://github.com/MACLEB1903

Source:
https://www.codewars.com/kata/5646c8e974eef351fd000021/train/cpp


Instructions:
You need to write a function that calculates that sum
<br><img style ="background-color: white; padding: 10px;" src="https://upload.wikimedia.org/math/2/f/8/2f80d4e2057af5e3126800a3577598dc.png">
<br><b>n</b> - integer number more than 0
<br><b>p</b> - integer number is belong [1;25]
python
sum_of_sequence(4,1) # => 10
sum_of_sequence(2,25) # => 33554433

*/

int sequenceSum(int start, int end, int step){
  if (start > end) return 0;
  
  int sum = 0;
  
  for (int i = start; i <= end; i += step){
    sum += i;
  }
  
  return sum;
}
