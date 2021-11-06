#include <iostream>
using namespace std;

int main () {

  string s_foo, s_foo_back, s_foo_front;

  s_foo = "nuvem";

  for (int i = 0; i < s_foo.size(); i++) {
    s_foo_back = s_foo.back();
    s_foo_front = s_foo.substr(0, s_foo.size() - 1);
    s_foo.clear();
    s_foo.append(s_foo_back);
    s_foo.append(s_foo_front);
    cout << s_foo << endl;
  }
  
  return 0;
}
// rotaciona uma string
