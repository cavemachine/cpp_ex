#include <iostream>
#include <cctype>
using namespace std;

int main () {
  char t;
  string frase;
  bool pangram;
  pangram = true;
  
  cout << "Digite uma frase: " ;
  getline(cin, frase);
  cout << "frase: " << frase << endl;
  
  for (t = 'a'; t <= 'z'; t++) {
    if ( (frase.find(t) != string::npos) || (frase.find(toupper(t)) != string::npos) ) {
      cout << t;
    } else {
      pangram = false;
    }
  }
  cout << endl;
  
  if (pangram) {
    cout << "É um pangram. " << endl ;
  } else {
    cout << "Não é um pangram. " << endl ;
  }
}

// verifica se a frase digitada é um pangrama (contém todas as letras do alfabeto).
