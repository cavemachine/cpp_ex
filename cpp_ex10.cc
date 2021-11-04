#include <iostream>
#include <ctime>
#include <cstdlib>

#define DNA_SIZE 20

int main () {
  
  srand (time(NULL));
  int hamming_dist;
  char x;
  char DNA_letters[] = "CGAT";
  char DNA_a[DNA_SIZE], DNA_b[DNA_SIZE];
  
  for (int y = 0; y < DNA_SIZE; y++) {
    x = DNA_letters[rand() % 4];
    DNA_a[y] = x;
  }
  for (int y = 0; y < DNA_SIZE; y++) {
    std::cout << DNA_a[y] << " ";
  }  
  std::cout << std::endl;

  for (int y = 0; y < DNA_SIZE; y++) {
    x = DNA_letters[rand() % 4];
    DNA_b[y] = x;
  }
  for (int y = 0; y < DNA_SIZE; y++) {
    std::cout << DNA_b[y] << " ";
  }
  std::cout << std::endl;

  for (int y = 0; y < DNA_SIZE; y++) {
    if (DNA_a[y] != DNA_b[y]) {
      std::cout << "^ ";
      hamming_dist++;
    } else {
      std::cout << "  ";      
    }
  }
  std::cout << std::endl;
  std::cout << "Hamming Distance: " << hamming_dist << std::endl;
  
  return 0;
}
//mostra duas sequencias de DNA e calcula a 'hamming distance' entre elas
