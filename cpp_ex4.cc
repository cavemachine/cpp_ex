#include <iostream>

unsigned long long int board[8][8];

int multiply_row(unsigned long long int start_num) {
  unsigned long long int x;
  for (int b = 0; b < 8; b++) {
    for (int a = 0; a < 8; a++)
      {
	if (a == 0)
	  {
	    board[b][a] = start_num;
	    std::cout << board[b][a] << " " ;
	  }
	else
	  {
	    x = board[b][a-1] * 2;
	    board[b][a] = x;
	    std::cout << board[b][a] << " " ;
	  }
      }
    start_num = x * 2;
    std::cout << "saida: " << x*2 << std::endl;
    
  }
  std::cout << "saida fim: " << (x)*2 << std::endl;
  return 0;
}

int main () {
  std::cout << "Olá " << std::endl;
  
  multiply_row(1);
  return 0;
}
