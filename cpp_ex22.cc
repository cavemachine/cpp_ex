#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int number, i_begin, i_end;
  string s_number, s_begin, s_end;
  cout << "Digite um número de 6 digitos: "; // pode ser qualquer mult. de 2
  cin >> number;

  while (number < 999999) {
    s_number = to_string(number);
    s_begin = s_number.substr(0, (s_number.size()/2) );
    s_end = s_number.substr( (s_number.size()/2), (s_number.size()/2) );
    if (s_begin == "00") s_begin = "0";
    if (s_end == "00") s_end = "0";
    i_begin = stoi(s_begin);
    i_end = stoi(s_end);

    if ( pow((i_begin + i_end), 2) == number ) {
      cout << "quirksome: " << number << endl;
    }
    number++;
    //cout << s_begin << ".." << s_end << endl;
  }
}

//quirksome squares
//http://web.kshs.kh.edu.tw/academy/luckycat/homework/q256.htm
