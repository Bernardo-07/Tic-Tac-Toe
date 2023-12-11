#include <stdio.h>

int main() {
  
  char tabuleiro[3][3];
  int linha, coluna; 
  int jogador = 1;
  int fim = 0;
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      tabuleiro[i][j]=' ';
    }
  }

  do{
    printf(" 0\t 1\t 2\n\n");
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        printf(" %c ",tabuleiro[i][j]);
        if (j != 2){
          printf("|");
        }
      }
      printf("  %d",i);
      if (i != 2){
        printf("\n-----------");
      }
      printf("\n");
    }
    
    do{
      printf("\nDigite a linha que deseja jogar (0-2): ");
      scanf("%d",&linha);
    }while(linha<0 || linha>2);
    do{
      printf("\nDigite a coluna que deseja jogar (0-2): ");
      scanf("%d",&coluna);
    }while(coluna<0 || coluna>2);     
  
    //fazer o teste se essa posição do tabuleiro tem espaço vazio
    if(tabuleiro[linha][coluna] != ' '){
      printf("Essa posição já está ocupada, por favor digite coordenadas válidas");
      do{
        printf("\nDigite a linha que deseja jogar (0-2): ");
        scanf("%d",&linha);
      }while(linha<0 || linha>2);
      do{
        printf("\nDigite a coluna que deseja jogar (0-2): ");
        scanf("%d",&coluna);
      }while(coluna<0 || coluna>2); 
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
  
    if(tabuleiro[0][0] == 'O' && tabuleiro[0][1] == 'O' && tabuleiro[0][2] == 'O' ||
       tabuleiro[1][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[1][2] == 'O' ||
       tabuleiro[2][0] == 'O' && tabuleiro[2][1] == 'O' && tabuleiro[2][2] == 'O'){
      printf("\nO jogador 2 venceu!\n");
      fim = 1;
    }
  
    if(tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X' ||
       tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X' ||
       tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X'){
      printf("\nO jogador 1 venceu!\n");
      fim = 1;
    }
  
    if(tabuleiro[0][0] == 'O' && tabuleiro[1][0] == 'O' && tabuleiro[2][0] == 'O' ||
       tabuleiro[0][1] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][1] == 'O' ||
       tabuleiro[0][2] == 'O' && tabuleiro[1][2] == 'O' && tabuleiro[2][2] == 'O'){
      printf("\nO jogador 2 venceu!\n");
      fim = 1;
    }
  
    if(tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X' ||
       tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X' ||
       tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X'){
      printf("\nO jogador 1 venceu!\n");
      fim = 1;
    }
  
    if(tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O' || 
      tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O'){
      printf("\nO jogador 2 venceu!\n");
      fim = 1;
    }
  
    if(tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X' ||
      tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'){
      printf("\nO jogador 1 venceu!\n");
      fim = 1;
    }
  }while(fim == 0);

  return 0;
}