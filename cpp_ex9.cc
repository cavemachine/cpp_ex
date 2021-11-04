#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> *volante, lista1, lista2, lista3;

  //  lista1.assign(5, 88);
  volante = &lista1;
  volante->push_back(34);
  
  for (int x = 0; x < lista1.size(); x++) {
    cout << lista1.at(x) << endl;
  }
  cout << "-----" << endl;
  for (int x = 0; x < volante->size(); x++) {
    cout << volante->at(x) << endl;
  }
  
  return 0;
}
