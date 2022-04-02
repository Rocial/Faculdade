/*@file: Exerc 6.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Fazer um programa que calcule o quadrado de 10 números digitados pelo usúario
*/

//Bibliotecas para adicionar as funções.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As variáveis.
int number = 0;//Essa variável vai receber o valor e imprimir o quadrado do mesmo.

//Principal.
int main(){

  //Para a correção de alguns caracteres.
  setlocale(LC_ALL,"");

  //Para repetir o bloco abaixo 10 vezes
  for(int vzs = 10; vzs >= 1; vzs--){

    //Imprimi a mensagem na tela e salva o valor digitado no endereço da variável number.
    printf("Digite o numero: ");
    scanf("%i", &number);

    //Conta para que se obtenha quadrado.
    number = number * number;

    //Mostrar o valor atual de number na tela
    printf("\n%d\n\n", number);

  }//FIM do for
  return 0;
}//FIM do principal
