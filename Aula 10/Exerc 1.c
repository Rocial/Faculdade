/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Fazer um algoritmo que exiba todos os n�meros de 1 a 100.
*Utilizando a fun��o for na l�gica.
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

  //Fun��o onde se cria um la�o de repti��o, onde number incrementa toda as vezes em que number for menor ou igual a 100.
  for(number = 1; number <= 100; number++){

    //Imprimi na tela o valor do ciclo atual de number na tela.
    printf("%d\n", number);

  }//Fim do for
  return 0;
}//Fim do principal.
