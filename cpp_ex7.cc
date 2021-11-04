#include <iostream>

int main () {
  std::cout << "Digite seu nome: " ;
  std::string nome;
  //  std::cin >> nome;
  getline(std::cin, nome);
  if (nome != "") {
    std::cout << "One for " << nome << ", one for me" << std::endl;
  } else {
    std::cout << "One for you, one for me" << std::endl;
  }
}
// A partir do nome digitado, responde com uma frase incluindo o nome, ou uma frase generica se não for digitado nenhum nome.
