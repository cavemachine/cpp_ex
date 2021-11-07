#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265

int main () {

  int altura = 19, comprimento = 9, largura = 6, angulo, volume;
  // cout << "altura: ";
  // cin >> altura;
  // cout << "comprimento: ";
  // cin >> comprimento;
  // cout << "largura: ";
  // cin >> largura;
  cout << "angulo: ";
  cin >> angulo;

  int vol_triang, altura_triang, compr_triang, larg_triang;
  compr_triang = comprimento;
  larg_triang = largura;
  altura_triang = tan((angulo * PI) / 180)*comprimento;

  vol_triang = (altura_triang * compr_triang * larg_triang) / 2;
  volume = (altura*comprimento*largura);
  cout << "volume da caixa: " << volume << endl;
  cout << "volume do triang: " << vol_triang << endl;
  cout << "restante na caixa: " << volume - vol_triang << endl;
  
  return 0;
}
// http://web.kshs.kh.edu.tw/academy/luckycat/homework/q11909.htm
// <<incompleto>>
