#include <iostream>
#include <cstdlib>
#include <ctime>

#define DNA_SIZE 30

int main () {

  srand(time(NULL));
  char DNA_letters[] = "CGAT";
  char DNA[DNA_SIZE];
  char RNA[DNA_SIZE];
  
  std::cout << "DNA: ";
  for (int y = 0; y < DNA_SIZE; y++) {
    DNA[y] = DNA_letters[rand() % 4];
    switch (DNA[y]){
    case 'C':
      RNA[y] = 'G';
      break;
    case 'G':
      RNA[y] = 'C';
      break;
    case 'A': 
      RNA[y] = 'U'; 
      break;
    case 'T':
      RNA[y] = 'A';
      break;
    }
    std::cout << DNA[y];
  }
  std::cout << std::endl;

  std::cout << "RNA: ";
  for (int y = 0; y < DNA_SIZE; y++) {
    std::cout << RNA[y];    
  }  
  std::cout << std::endl;

  
  return 0;
}

// Mostra um trecho de DNA e sua contra-parte RNA.
