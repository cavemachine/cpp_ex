#include <iostream>
#include <cstdlib>
#include <ctime>

#define DNA_SIZE 10

int main () {

  srand(time(NULL));
  int D_a, D_g, D_c, D_t;
  bool invalid_dna;
  char DNA[DNA_SIZE];
  char DNA_letters[] = "CGATCGATCGATCGATX";

  invalid_dna = false;
  D_a = 0, D_g = 0, D_c = 0, D_t = 0;

  for (int y = 0; y < DNA_SIZE; y++) {
    DNA[y] = DNA_letters[rand() % 17]; 
    std::cout << DNA[y];
  }
  for (int y = 0; y < DNA_SIZE; y++) {
    switch(DNA[y]) {
	case 'A':
	  D_a++;
	  break;
	case 'C':
	  D_c++;
	  break;
        case 'G':
	  D_g++;
	  break;
        case 'T':
	  D_t++;
	  break;
        case 'X':
	  invalid_dna = true;
	  break;
      }
  }
  std::cout << std::endl;
  if (invalid_dna) {
    std::cout << "INVALID DNA";
  } else { 
    std::cout << " A: " <<D_a << " C: " << D_c << " G: " << D_g << " T: " << D_t;
  }
  std::cout << std::endl;
  
}
// Cria um trecho de DNA e conta seus nucleotídeos. Aponta inválido se a sequência de DNA estiver incorreta.
