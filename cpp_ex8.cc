#include <iostream>
#include <vector>

int main () {
  std::vector<std::string> *volante, grade1, grade2, grade3;
  int ano = -1;
  char operacao = 'x';
  std::string nome;
  
  while( (ano != 0) && (operacao != 's') ) {
    std::cout << "Digite a turma (1 , 2 ou 3) ou qualquer outra letra/numero para sair: ";
    std::cin >> ano;
    
    switch(ano){
    case 1:
      volante = &grade1;
      break;
    case 2:
      volante = &grade2;
      break;
    case 3:
      volante = &grade3;
      break;
    default:
      return 0;
    }
   
	
    std::cout << "Turma [" << ano << "] --> [A]adicionar [R]remover [L]listar [S]sair : ";
    std::cin >> operacao;
	
    switch(operacao){
    case 'a':
      std::cout << "Digite o nome do aluno: ";
      std::cin >> nome;
      volante->push_back(nome);
      std::cout << "Aluno [" << nome << "] adicionado a turma [" << ano << "]." << std::endl;
      break;
    case 'r':
      int num_delete;
      for (int x = 0; x < volante->size(); x++) {
	std::cout << "Aluno " << x+1 << ": "<< volante->at(x) << std::endl;
      }
      std::cout << "Digite o numero do aluno para remover: ";
      std::cin >> num_delete;
      num_delete--;
      volante->erase(volante->begin()+num_delete);
      break;
    case 'l':
      std::cout << "-- Turma " << ano << "--" << std::endl;
      for (int x = 0; x < volante->size(); x++) {
	std::cout << "Aluno " << x+1 << ": "<< volante->at(x) << std::endl;
      }
      break;
    case 's':
      std::cout << "Escolheu sair. "<< std::endl;
      break;
    }
	
  }
}  

