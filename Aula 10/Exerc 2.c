/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Onde deve-se fazer um algoritmo que exiba todos os numeros de 100 a 1.
*(De forma descrecente).
*/

//Bibliotecas para adicionar as funções
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As variáveis
int number;//Para imprimir os valores na tela e usar dentro da lógica de repetição.

//Principal
int main(){

  //Para a correção de alguns caracteres
  setlocale(LC_ALL,"");

  //Função onde se cria um laço de reptição, onde number decrementa toda as vezes em que number for menor ou igual a 1.
  for(number = 100; number >= 1; number--){

    //Imprimi na tela o valor do ciclo atual de number na tela.
    printf("%d\n", number);

  }//Fim do for
  return 0;
}//Fim do principal.
