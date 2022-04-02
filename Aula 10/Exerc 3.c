/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Onde deve-se fazer um algoritmo
*Que exiba todos os números múltiplos de 5 entre 1 e 500
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

  //Cria uma repetição onde, number enquanto number for menor ou igual a 500, deve incrementar mais um.
  for(number = 1; number <= 500; number++){

    //Lógica onde se o número for divisivel a 5, o resto deverá ser = 0.
    if(number%5 == 0){

      //Se o resto for igual a 0, o cmd executará essa bloco.
      //Imprimi na tela o valor do ciclo atual de number na tela.
      printf("%d\n", number);

    }//Fim do if

  }//Fim do for
  return 0;
}//Fim do principal.
