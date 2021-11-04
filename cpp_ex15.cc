#include <iostream>
using namespace std;

#define PRIME_MAX 100

struct number_cell {
  short num;
  bool available;
  bool prime;
};


int main () {

  int pos = 0;
  int add_factor;
  number_cell all_numbers[PRIME_MAX];

  for (int i = 0; i < PRIME_MAX; i++) {
    all_numbers[i].num = i + 2;
    all_numbers[i].available = true;
    all_numbers[i].prime = false;
  }
  
  for (int i = 0; i < PRIME_MAX; i++) {
    if (all_numbers[i].available == true) {
      all_numbers[i].prime = true;
      add_factor = all_numbers[i].num;
      pos = i + add_factor;
      while (pos < PRIME_MAX) {
	all_numbers[pos].available = false;
	pos = pos + add_factor;
      }
    }
  }  
  for (int i = 0; i < PRIME_MAX; i++) {
    if (all_numbers[i].available) {
      cout << ".. " << all_numbers[i].num; 
    }
  }
}
