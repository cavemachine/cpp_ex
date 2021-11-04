#include <iostream>
#include <vector>
using namespace std;

#define PRIMES_GOAL 80

int main () {
  vector<int> divisiveis;
  vector<int> primes;
  int found_primes = 0;

  divisiveis.push_back(1);
  
  int current_num = 2;
  int current_num_passed = 0;
  
  while (found_primes < PRIMES_GOAL) {
    cout << "found primes: " << found_primes << endl;
    
    for (int i = 0; i < divisiveis.size(); i++)
      {
      if (current_num % divisiveis[i] == 0) {
	current_num_passed++;
      }
      if (divisiveis[i] == divisiveis.back()) {
	if (current_num_passed == 1) {
	  found_primes++;
	  primes.push_back(current_num);
	  divisiveis.push_back(current_num);
	  current_num++;
	  current_num_passed = 0;
	  break;
	}
	if (current_num_passed >= 2 ) {
	  current_num++;
	  current_num_passed = 0;
	  break;
	}
      }
    }
    
  }
  for (int i = 0; i < primes.size(); i++) {
    cout << "Prime: " << primes.at(i) << "." << endl;
  }
  return 0;
}

// Lista um número especificado de números primos.
