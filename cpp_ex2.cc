#include <iostream>

int main() {
  int num;
  /* std::cout << std::endl; */
  /* std::cout << "Digite um ano: " ; */
  /* std::cin >> num; */
  num = 1900;
  while (num < 2040) {

    if (num % 100 == 0) {
      if (num % 400 == 0){
	std::cout << " [ Ano centenário bissexto: " << num << " ]" ;
      } else {
	//std::cout << "Ano centenário não bissexto: " << num << std::endl;
      }
    } else {
      if (num % 4 == 0) {
	std::cout << " " << num ;
      } else {
	//std::cout << "Não é ano bissexto: " << num << std::endl;
      }
    }
    num++;
    //std::cout << std::endl;
    //std::cout << "Digite um ano: " ;
    //std::cin >> num;
  }
  
  std::cout << std::endl << "Bye" << std::endl  ;
  return 0;
}

// Identifica ano bissexto
