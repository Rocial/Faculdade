/*@file: Exerc 6.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Fazer um programa que calcule o quadrado de 10 n�meros digitados pelo us�ario
*/

//Bibliotecas para adicionar as fun��es.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As vari�veis.
int number = 0;//Essa vari�vel vai receber o valor e imprimir o quadrado do mesmo.

//Principal.
int main(){

  //Para a corre��o de alguns caracteres.
  setlocale(LC_ALL,"");

  //Para repetir o bloco abaixo 10 vezes
  for(int vzs = 10; vzs >= 1; vzs--){

    //Imprimi a mensagem na tela e salva o valor digitado no endere�o da vari�vel number.
    printf("Digite o numero: ");
    scanf("%i", &number);

    //Conta para que se obtenha quadrado.
    number = number * number;

    //Mostrar o valor atual de number na tela
    printf("\n%d\n\n", number);

  }//FIM do for
  return 0;
}//FIM do principal
