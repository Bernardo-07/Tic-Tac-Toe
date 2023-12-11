#include <stdio.h>

int main() {
  
  char tabuleiro[3][3];
  int linha, coluna; 
  int jogador = 1;
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      tabuleiro[i][j]=' ';
    }
  }
  printf(" 1\t 2\t 3\n\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf(" %c ",tabuleiro[i][j]);
      if (j != 2){
        printf("|");
      }
    }
    printf("  %d",i+1);
    if (i != 2){
      printf("\n-----------");
    }
    printf("\n");
  }
  
  do{
    printf("\nDigite a linha que deseja jogar (1-3): ");
    scanf("%d",&linha);
  }while(linha<1 || linha>3);
  do{
    printf("\nDigite a coluna que deseja jogar (1-3): ");
    scanf("%d",&coluna);
  }while(coluna<1 || coluna>3);     

  //fazer o teste se essa posição do tabuleiro tem espaço vazio
  if(tabuleiro[linha][coluna] != ' '){
    printf("Essa posição já está ocupada, por favor digite coordenadas válidas");
    do{
      printf("\nDigite a linha que deseja jogar (1-3): ");
      scanf("%d",&linha);
    }while(linha<1 || linha>3);
    do{
      printf("\nDigite a coluna que deseja jogar (1-3): ");
      scanf("%d",&coluna);
    }while(coluna<1 || coluna>3); 
  }

  switch(jogador){
    case 1: 
      tabuleiro[linha][coluna] = 'X';
      jogador = 2;
      break;
    case 2:
      tabuleiro[linha][coluna] = 'O';
      jogador = 1;
      break;
  }
  return 0;
}