#include <iostream>
using namespace std;

int main() {
  cout << "Digite o número de segundos: " ;
  float idade_seg, idade_terra;
  cin >> idade_seg;
  idade_terra = idade_seg / 31557600;
  cout << "Idade na Terra: " << idade_terra << " anos." <<  endl;
  cout << "Idade em Mercúrio: " << idade_terra / 0.2408467  << " anos." <<  endl;
  cout << "Idade em Vênus: " << idade_terra / 0.61519726  << " anos." <<  endl;
  cout << "
  
}
// Converte segundos em idade em diversos planetas

