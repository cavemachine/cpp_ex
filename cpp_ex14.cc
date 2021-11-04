#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct queen {
  int y;
  int x;
};

int main () {
  srand(time(NULL));
  
  int board[8][8] = {0};
  queen q_white;
  queen q_black;

  q_white.x = rand() % 8;
  q_white.y = rand() % 8;
  q_black.x = rand() % 8;
  q_black.y = rand() % 8;
  
  cout << "white queen position: " << q_white.x << "," << q_white.y << endl;
  cout << "black queen position: " << q_black.x << "," << q_black.y << endl; 

  board[q_white.y][q_white.x] = 1;
  board[q_black.y][q_black.x] = 2;

  for (int y = 0; y < 8; y++) {
    for(int x = 0; x < 8; x++) {
      cout << board[y][x];
    }
    cout << endl;
  }
  if ((q_white.x == q_black.x) || (q_white.y == q_black.y)) {
    cout << "Capturavel " << endl;
  }
  if (abs(q_white.x - q_black.x) == abs(q_white.y - q_black.y) ) {
    cout << "Capturavel (diagonal) " << endl;    
  }
  
  return 0;
}

// Posiciona duas rainhas no tabuleiro de xadrez e verifica se elas podem se capturar.
