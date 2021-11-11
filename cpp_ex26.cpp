#include <iostream>
using namespace std;

int main () {

  string number;
  int digits, start_pos;
  
  cout << "Digite o numero: ";
  cin >> number;
  
  cout << "Digite digitos: ";
  cin >> digits;
  
  start_pos = 0;
  while ((start_pos + digits) <= number.size()) {
    cout << number.substr(start_pos,digits) << ".. ";
    start_pos++;
  }
  
  return 0;
}
// pede um número e repete partes dele, indo do inicio ao fim do número.
// https://exercism.org/tracks/cpp/exercises/series