//#include <string>
#include <iostream>

int main () {
  std::string myword, myword_rev;
  myword_rev = "";
  myword = "ola mundo";
  int myword_size = myword.size() - 1;
  std::cout << "original: " << myword << std::endl;

  while (myword_size >= 0) {
    myword_rev = myword_rev + myword[myword_size];
    myword_size--;
  }
  
  std::cout << "reverso: " << myword_rev << std::endl;

  return 0;
}
