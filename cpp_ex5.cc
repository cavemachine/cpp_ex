#include <iostream>
using namespace std;

int main () {
  int num;
  string finalword;
  
  cout << "Digite um número: " << endl;
  cin >> num ;
  
  if (num % 3 == 0) {
    finalword.append("in_tres ");
  }
  if (num % 5 == 0) {
    finalword.append("in_cinco ");
  }
  if (num % 7 == 0) {
    finalword.append("in_sete ");
  }
  if (finalword != "") {
    cout << endl << finalword << endl;
  } else {
    cout << endl << num << endl;
  }
  
  return 0;
}

// testa se um número é divisivel por 3, 5 e 7. Adiciona uma palavra ao resultado final para cada vez que ocorrer divisão. Caso não ocorra nenhuma divisão, retorna o próprio número.
