#include <iostream>
#include <cmath>
using namespace std;

void parse_input(int &i_hour, int &i_minute, string &input_hour) {
  
  int pos_2p;
  string s_hour, s_minute;
  s_hour = "";
  s_minute = "";
  
  for (int i = 0; i < input_hour.size(); i++) {
    if (input_hour[i] == ':') {
      pos_2p = i;
      break;
    }
  }
  for (int i = 0; i < pos_2p; i++) {
    s_hour = s_hour + input_hour[i];
  }
  for (int i = pos_2p + 1 ; i < input_hour.size(); i++) {
    s_minute = s_minute + input_hour[i];
  }
  i_hour = stoi(s_hour);
  i_minute = stoi(s_minute);
  if (i_hour == 24) i_hour = 0;
  if (i_hour > 11) i_hour = i_hour - 12;
}

int main () {

  string input_hour;
  int i_hour, i_minute;
  int deg_hour, deg_hour_sub, deg_minute, deg_final;

  cout << "Digite a hora: ";
  cin >> input_hour;

  parse_input(i_hour, i_minute, input_hour);
  //cout << i_hour << ".." << i_minute << endl;

  deg_hour = i_hour * 30;
  deg_minute = i_minute * 6;

  deg_hour_sub = i_minute / 2;
  deg_hour = deg_hour + deg_hour_sub;

  deg_final = abs(deg_hour - deg_minute);
  if ( deg_final > 180 ) {
    deg_final = 360 - deg_final;
  }
  
  //cout << deg_hour << ".." << deg_minute << endl;
  cout << "Diferenca ângulo: " << deg_final << " graus" << endl;
  
  return 0;
}

// A partir de um horário digitado (hh:mm), calcula o ângulo entre...
// ...os dois ponteiros do relógio mostrando o menor ângulo entre os ponteiros.
// incluindo a mudança gradual do ponteiro das horas.
