#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Variaveis
int matrizA[2][3];//Variavel matriz de ordem 5
int matrizB[2][3];
int matrizC[2][3];

//Principal
int main (){

  //Lógica de repetição, usado para repetir o scanf de acordo com o valor a ser salvo em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 4, repeti o bloco novamente e incrementa mais um.
  //Assim sendo salvando os valores em cada respectivo endereço, assim sendo, formando uma matriz de ordem 5.
  for(int l = 0; l <= 1; l++)
  {//Inicio do for externo
    for(int c = 0; c <= 2; c++)
    {//Inicio do for interno
      printf("digite o valor na linha e coluna da matriz A[%d][%d]: ", l, c);
      scanf("%d", &matrizA[l][c]);
    }//Fim do for interno
  }//Fim do for externo

  for(int l = 0; l <= 1; l++)
  {//Inicio do for externo
    for(int c = 0; c <= 2; c++)
    {//Inicio do for interno
      printf("digite o valor na linha e coluna da matriz B[%d][%d]: ", l, c);
      scanf("%d", &matrizB[l][c]);
      matrizC[l][c] = (matrizA[l][c] + matrizB[l][c]) * 2;
    }//Fim do for interno
  }//Fim do for externo
  for(int l = 0; l <= 1; l++)
  {//Inicio do for externo
    printf("\n");
    for(int c = 0; c <= 2; c++)
    {//Inicio do for interno
      printf("%d ", matrizC[l][c]);
    }//Fim do for interno
  }//Fim do for externo

  //Imprimi dois espaços para questões estéticas.
  printf("\n\n");
}//FIM do principal
