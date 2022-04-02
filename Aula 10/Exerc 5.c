/*@file: Exerc 5.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Fazer um programa que calcule o fatorial de um número a ser  digitado
*/

//Bibliotecas para adicionar as funções.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As variáveis.
int number;//Para usar dentro da lógica de repetição.
int fatorial;//Para que se faça a conta do fatorial dentro de for.

//Principal.
int main(){

  //Para a correção de alguns caracteres.
  setlocale(LC_ALL,"");

  //Imprimi a mensagem na tela e salva o valor digitado no endereço da variável number.
  printf("Digite o numero: ");
  scanf("%i", &number);

  //É importante igualar esses valores já que não se pode interferir no valor de number.
  fatorial = number;

  //A função for continuará a repetir o bloco abaixo enquanto number for maior ou igual a 2.
  //Onde em toda repetição a função decrementa um de number.
  for(number; number >= 2; number--){

    //Conta para que se obtenha o valor de fatorial.
    fatorial = fatorial * (number - 1);

  }//Fim do for.

  //Imprimi o resultado de fatorial na tela, depois de for ter se finalizado.
  printf("\nResultado do fatorial desse número: %d\n\n", fatorial);

  return 0;
}//Fim do principal.
