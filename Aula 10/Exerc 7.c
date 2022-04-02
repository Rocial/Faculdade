/*@file: Exerc 7.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Fazer um programa que imprimi n elementos da sequência de fibonacci
*O primeiro termo será o 0 e o segundo 1
*Utilizando a equação: Fn = Fn-1 + Fn-2
*/

//Bibliotecas para adicionar as funções.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As variáveis
int n;//Para a contagem do for
int fibo = 0;//Será o valor imprimido na tela
int fibo1 = 0;//Será o valor antecessor ao atual valor a ser imprimido na tela
int fibo2 = 0;//Será o valor antecessor a fibo1

//Principal
int main (){

  //Para a correção de alguns caracteres
  setlocale(LC_ALL,"");

  //Imprimi a mensagem e salva o valor digitado pelo usuário no endereço n.
  printf("Digite o número de elementos para a sequência: ");
  scanf("%d", &n);

  //Repeti de acordo com a lógica proposta em n.
  //Onde, enquanto n for maior do que 0, decrementa um valor de n, até que a condição não seja mais verdadeira.
  for(n; n > 0; n--){

    //Imprimi o valor atual salvo no endereço de fibo.
    printf("%d, ", fibo);

    //Este if dará ao começo da contagem.
    if(fibo == 0){

      //Para o primeiro valor na sequência
      fibo = 1;

    }else{

      //Esta lógica está baseada na equação da sequência de fibonacci. Fibo1 seria o termo anterior e fibo2 o termo anterior ao fibo1.
      fibo1 = fibo;
      fibo = fibo1 + fibo2;
      fibo2 = fibo1;

    }//FIM do if e else
  }//FIM do for

  //Imprimir uma barra, apenas por questões esteticas.
  printf("\n");

  return 0;
}//FIM do principal
