#include <iostream>
#include <string>
using namespace std;

int main () {

  int numero;
  string s_numero;
  cout << "Digite um número: ";
  cin >> numero;
  s_numero = to_string(numero);
  
  bool passed;
  passed = false;
  
  for (int i = 0; i < s_numero.size(); i++) {
    if (i != s_numero.size() - 1 ) {
      if (s_numero[i] > s_numero[i+1]) {
	break;
      }
    } else {
      passed = true;
    }
  }
  if (passed == false) {
    cout << "Failed normal, trying reverse..." << endl;
    for (int i = 0; i < s_numero.size(); i++) {
      if (i != s_numero.size() - 1 ) {
	if (s_numero[i] < s_numero[i+1]) {
	  break;
	}
      } else {
	passed = true;
      }
    }    
  }

  
  cout << ".." << passed ;
  

  return 0;
}
// Testa se os digitos de um número são crescentes (ex.2567) ou decrescentes.
