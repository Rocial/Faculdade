/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 29/07/2021
*brief: Exercício 1 da aula 12, usando matrizes.
*Criar uma matriz de ordem 5.
*/

//Bibliotecas usadas no código.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Variaveis
int matrizA[2][3];//Variavel matriz de ordem 5
int matrizB[3][2];
int matrizC[2][2];

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

  for(int l = 0; l <= 2; l++)
  {//Inicio do for externo
    for(int c = 0; c <= 1; c++)
    {//Inicio do for interno
      printf("digite o valor na linha e coluna da matriz B[%d][%d]: ", l, c);
      scanf("%d", &matrizB[l][c]);
    }//Fim do for interno
  }//Fim do for externo

int l2 = -1;
int l3;
int c2;
int c3 = -1;
int first;
int second;
int third;

  for(int l = 0, l3 = 0; l <= 1; l++)
  {//Inicio do for externo
    if(l > 0){
      l2 = -1;
      c3 = -1;
    }

    l2 = ++l2;
    c3 = ++c3;
    l3 = 0;
    c2 = 0;
    for(int c = 0, c2 = 0; c <= 1; c++)
    {
      first = matrizA[l2][c2] * matrizB[l3][c3];
printf("\n\n%d\n\n", first);
      l3 = ++l3;
      c2 = ++c2;
      second = matrizA[l2][c2] * matrizB[l3][c3];
printf("\n\n%d\n\n", second);
      l3 = ++l3;
      c2 = ++c2;
      third = matrizA[l2][c2] * matrizB[l3][c3];
printf("\n\n%d\n\n", third);
      matrizC[l][c] = first + second + third;
    }//Fim do for interno
  }//Fim do for externo


  //Imprimi a mensagem na tela.
  printf("\n\nMatriz A 2x3\n");

  //Lógica de repetição, usado para repetir o for, onde o printf de acordo com o valor a ser imprimido em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 4, repeti o bloco novamente e incrementa mais um.
  //Assim sendo imprimindo os valores de cada respectivo endereço, assim sendo, formando uma matriz de ordem 5.
  for(int l = 0; l <= 1; l++)
  {//Inicio do for externo
    printf("\n");
    for(int c = 0; c <= 2; c++)
    {//Inicio do for interno
      printf("%d ", matrizA[l][c]);
    }//Fim do for interno
  }//Fim do for externo

  //Imprimi a mensagem na tela.
  printf("\n\nMatriz B 3x2\n");

  //Lógica de repetição, usado para repetir o for, onde o printf de acordo com o valor a ser imprimido em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 4, repeti o bloco novamente e incrementa mais um.
  //Assim sendo imprimindo os valores de cada respectivo endereço, assim sendo, formando uma matriz de ordem 5.
  for(int l = 0; l <= 2; l++)
  {//Inicio do for externo
    printf("\n");
    for(int c = 0; c <= 1; c++)
    {//Inicio do for interno
      printf("%d ", matrizB[l][c]);
    }//Fim do for interno
  }//Fim do for externo

  //Imprimi dois espaços para questões estéticas.
  printf("\n\n");
  //Imprimi a mensagem na tela.
  printf("\n\nMatriz C 2x2\n");

  //Lógica de repetição, usado para repetir o for, onde o printf de acordo com o valor a ser imprimido em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 4, repeti o bloco novamente e incrementa mais um.
  //Assim sendo imprimindo os valores de cada respectivo endereço, assim sendo, formando uma matriz de ordem 5.
  for(int l = 0; l <= 1; l++)
  {//Inicio do for externo
    printf("\n");
    for(int c = 0; c <= 1; c++)
    {//Inicio do for interno
      printf("%d ", matrizC[l][c]);
    }//Fim do for interno
  }//Fim do for externo

  //Imprimi dois espaços para questões estéticas.
  printf("\n\n");
}//FIM do principal
