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
int matriz[3][3];//Variavel matriz de ordem 5
int diagp = 0;
int diags = 0;

//Principal
int main (){
  //Corrige alguns caracteres
  setlocale(LC_ALL,"");
  //Lógica de repetição, usado para repetir o scanf de acordo com o valor a ser salvo em cada linha e coluna.
  //Onde de acordo com o l e c, se forem menor ou igual a 2, repeti o bloco novamente e incrementa mais um.
  //Assim sendo salvando os valores em cada respectivo endereço, assim sendo, formando uma matriz de ordem 3.
  for(int l = 0; l <= 2; l++)
  {//Inicio do for externo
    for(int c = 0; c <= 2; c++)
    {//Inicio do for interno
      printf("digite o valor na linha e coluna[%d][%d]: ", l, c);
      scanf("%d", &matriz[l][c]);
      if(l == c){
        diagp = matriz[l][c] + diagp;
      }
       if(l + c == 4){
         diags = matriz[l][c] + diags;
       }
    }//Fim do for interno
  }//Fim do for externo

printf("\nSoma dos elementos da diagonal principal: %d", diagp);
printf("\nSoma dos elementos da diagonal secundária: %d\n\n", diags);

}
