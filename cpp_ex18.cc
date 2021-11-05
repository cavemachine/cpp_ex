#include <iostream>
using namespace std;

int main () {

  bool one_as_result;
  int num, num_div, divisor;
  divisor = 2;
  one_as_result = false;

  cin >> num;
  
  while (one_as_result == false) {
    if (num % divisor == 0) {
      num = num / divisor;
      cout << ".." << divisor;
      cout << "-->" << num << endl;
    } else {
      divisor++;
    }
    if (num == 1) {
      one_as_result = true;
    }
  }
  
  return 0;
}
