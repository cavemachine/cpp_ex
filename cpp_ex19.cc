#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
  srand(time(NULL));

  char d1,d2;
  int num;
  int num_robots;
  cout << "Digite a quantidade de robôs: ";
  cin >> num_robots;
  cout << "Os números seriais dos robôs são: " << endl;

  while (num_robots > 0) { 
    d1 = rand() % ((90 - 65) + 1) + 65; // 65='A' 90='Z'
    d2 = rand() % ((90 - 65) + 1) + 65;
    num = rand() % ((999 - 100) + 1) + 100;
    cout << d1 << d2 << num << endl;
    num_robots--;
  }
  return 0;
}
// gera números seriais diferentes no formato XXNNN (X = Letra, N = Numero);
