/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Onde deve-se fazer um algoritmo que exiba todos os numeros de 100 a 1.
*(De forma descrecente).
*/

//Bibliotecas para adicionar as fun��es
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As vari�veis
int number;//Para imprimir os valores na tela e usar dentro da l�gica de repeti��o.

//Principal
int main(){

  //Para a corre��o de alguns caracteres
  setlocale(LC_ALL,"");

  //Fun��o onde se cria um la�o de repti��o, onde number decrementa toda as vezes em que number for menor ou igual a 1.
  for(number = 100; number >= 1; number--){

    //Imprimi na tela o valor do ciclo atual de number na tela.
    printf("%d\n", number);

  }//Fim do for
  return 0;
}//Fim do principal.
