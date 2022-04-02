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
int matriz[5][5];//Variavel matriz de ordem 5
int number = 0;
int coluna;
int linha;

//Principal
int main (){

  //Lógica de repetição, usado para repetir o scanf de acordo com o valor a ser salvo em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 4, repeti o bloco novamente e incrementa mais um.
  //Assim sendo salvando os valores em cada respectivo endereço, assim sendo, formando uma matriz de ordem 5.
  for(int l = 0; l <= 4; l++)
  {//Inicio do for externo
    for(int c = 0; c <= 4; c++)
    {//Inicio do for interno
      printf("digite o valor na linha e coluna[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
      if(number <= matriz[l][c]){
        number = matriz[l][c];
        linha = l;
        coluna = c;
      }
    }//Fim do for interno
  }//Fim do for externo
  system("cls");
printf("Resultados:\n");
printf("\nO maior valor encontrado foi %d\n", number);
printf("Na linha %d e na coluna %d\n\n", linha, coluna);
}//FIM do principal
