#include <stdio.h>
//jogo da velha
int main() {
  char tabuleiro[3][3];
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      tabuleiro[i][j]=' ';
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("| %c",tabuleiro[i][j]);
    }
    printf("|\n");
    if (i != 2){
      printf("----------\n");
    }
  }
  return 0;
}