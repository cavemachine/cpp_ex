#include <iostream>
#include <cmath>
using namespace std;

struct alergias {
  string produto;
  bool status;
};

void print_all ( alergias (&reg)[] ) { 
  for (int i = 0; i < 8; i++) {
    if (reg[i].status == true) {
      cout << "alergia: " << reg[i].produto << endl;
    }
  }
}

int check_validade (int &numero) {
  if (numero >= 256) { // checa se o número é 256 ou multiplo exato.
    float yy;
    yy = log2(numero);
    if (fmod(yy, 1.0) == 0) {
      cout << "256 ou multiplo.. saindo " << endl;
      return 1;
    }
  }
  if (numero > 256) { // converte numeros >256 para equivalente <256
    while (numero > 256) {     
      int j = 8;     
      while(numero > pow(2,j)){
	j++;
      }
      numero = numero - pow(2,j-1);	
    }
  }
  return 0;
}

void inicia_registro(alergias (&registro)[]) {
  registro[0].produto = "ovo";
  registro[0].status = false;
  registro[1].produto = "amendoim";
  registro[1].status = false;
  registro[2].produto = "marisco";
  registro[2].status = false;
  registro[3].produto = "morango";
  registro[3].status = false;
  registro[4].produto = "tomate";
  registro[4].status = false;
  registro[5].produto = "chocolate";
  registro[5].status = false;
  registro[6].produto = "polen";
  registro[6].status = false;
  registro[7].produto = "gatos";
  registro[7].status = false;
}

int main () {

  int numero;
  int codigos[8] = {1,2,4,8,16,32,64,128};
  int codigo_lower;
  alergias registro[8];
  
  inicia_registro(registro);

  cout << "Digite um número: ";
  cin >> numero;
  
  if (check_validade(numero) == 1) {
    return 0;
  };

  for (int i = 0; i < 8; i++) { // busco o código mais próximo abaixo de 'numero'
    if ( (numero > codigos[i]) && (numero < codigos[i+1]) && (i != 7) ) {
      codigo_lower = codigos[i];
      break;
    }
    if ( (numero > codigos[i]) && (codigos[i] == 128) && (numero < 256) ) {
      codigo_lower = codigos[i];
      break;
    }
    if (numero == codigos[i]) { // se o numero for um código, imprime e encerra.
      registro[i].status = true;
      print_all(registro);
      return 0;
    }    
  }

  int tmp = 0;
  bool found_all = false;
  while (found_all == false) { // separa e registra os códigos que compoem 'numero'
    if (tmp + codigo_lower <= numero) {
      int y = log2(codigo_lower);
      registro[y].status = true;    
      tmp = tmp + codigo_lower;
      codigo_lower = codigo_lower / 2;
    } else {
      codigo_lower = codigo_lower / 2;      
    }
    if (tmp == numero) {
      found_all = true;
    }
  }
  
  print_all(registro);
  return 0;
}
