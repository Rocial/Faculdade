/*@file: Exerc 5.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Fazer um programa que calcule o fatorial de um n�mero a ser  digitado
*/

//Bibliotecas para adicionar as fun��es.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As vari�veis.
int number;//Para usar dentro da l�gica de repeti��o.
int fatorial;//Para que se fa�a a conta do fatorial dentro de for.

//Principal.
int main(){

  //Para a corre��o de alguns caracteres.
  setlocale(LC_ALL,"");

  //Imprimi a mensagem na tela e salva o valor digitado no endere�o da vari�vel number.
  printf("Digite o numero: ");
  scanf("%i", &number);

  //� importante igualar esses valores j� que n�o se pode interferir no valor de number.
  fatorial = number;

  //A fun��o for continuar� a repetir o bloco abaixo enquanto number for maior ou igual a 2.
  //Onde em toda repeti��o a fun��o decrementa um de number.
  for(number; number >= 2; number--){

    //Conta para que se obtenha o valor de fatorial.
    fatorial = fatorial * (number - 1);

  }//Fim do for.

  //Imprimi o resultado de fatorial na tela, depois de for ter se finalizado.
  printf("\nResultado do fatorial desse n�mero: %d\n\n", fatorial);

  return 0;
}//Fim do principal.
