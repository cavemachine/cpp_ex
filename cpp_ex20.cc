#include <iostream>
#include <cmath>
using namespace std;

int main () {

  string input_hour, s_hour, s_minute;
  string clock_point = {"oooooooooooo"};
  int i_hour, i_minute;
  int pos_2p = 0;

  cout << "Digite a hora: ";
  cin >> input_hour;

  if (input_hour[0] == '0') {
    s_hour = input_hour[1];
  } else {
    s_hour = input_hour[0] ;
    s_hour = s_hour + input_hour[1];
  }

  while (input_hour[pos_2p] != ':') {
    pos_2p++;
    if (pos_2p > input_hour.size()) {
      cout << "Error: Missing ':'" << endl;
      return 0;
    }
  }
  s_minute = input_hour.substr(pos_2p + 1, input_hour.size());

  i_hour = stoi(s_hour);
  if (i_hour > 11) {
    if ( (i_hour == 12) || (i_hour == 24) ) {
      i_hour = 0;
    } else {
      i_hour = i_hour - 12;
    }
  }

  i_minute = stoi(s_minute);
  i_minute = floor(i_minute / 5.0);

  if (i_hour != i_minute) {
    clock_point[i_hour] = 'H' ;
    clock_point[i_minute] = 'M' ;
  } else {
    clock_point[i_hour] = 'X' ;
    clock_point[i_minute] = 'X' ;
  }

  cout << "        " << clock_point[0] << endl;
  cout << "    " << clock_point[11] << "       " << clock_point[1] << endl;
  cout << " " << clock_point[10] << "             " << clock_point[2] << endl;
  cout << clock_point[9] << "               " << clock_point[3] << endl;
  cout << " " << clock_point[8] << "             " << clock_point[4] << endl;
  cout << "    " << clock_point[7] << "       " << clock_point[5] << endl;
  cout << "        " << clock_point[6] << endl;

  return 0;
}
// mostra um relógio ASCII a partir de um horário (hh:mm) digitado.
