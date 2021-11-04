#include <iostream>
#include <cmath>
using namespace std;

int main () {
  
  int numero;
  cin >> numero;
  
  if (numero > 256) {
    while (numero > 256) {     
      int j = 8;     
      while(numero > pow(2,j)){
	j++;
      }
      numero = numero - pow(2,j-1);	
    }
  }

  numero = log2(32);
  cout << numero;
}
