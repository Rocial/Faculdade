/*@file: Exerc 7.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Fazer um programa que imprimi n elementos da sequ�ncia de fibonacci
*O primeiro termo ser� o 0 e o segundo 1
*Utilizando a equa��o: Fn = Fn-1 + Fn-2
*/

//Bibliotecas para adicionar as fun��es.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As vari�veis
int n;//Para a contagem do for
int fibo = 0;//Ser� o valor imprimido na tela
int fibo1 = 0;//Ser� o valor antecessor ao atual valor a ser imprimido na tela
int fibo2 = 0;//Ser� o valor antecessor a fibo1

//Principal
int main (){

  //Para a corre��o de alguns caracteres
  setlocale(LC_ALL,"");

  //Imprimi a mensagem e salva o valor digitado pelo usu�rio no endere�o n.
  printf("Digite o n�mero de elementos para a sequ�ncia: ");
  scanf("%d", &n);

  //Repeti de acordo com a l�gica proposta em n.
  //Onde, enquanto n for maior do que 0, decrementa um valor de n, at� que a condi��o n�o seja mais verdadeira.
  for(n; n > 0; n--){

    //Imprimi o valor atual salvo no endere�o de fibo.
    printf("%d, ", fibo);

    //Este if dar� ao come�o da contagem.
    if(fibo == 0){

      //Para o primeiro valor na sequ�ncia
      fibo = 1;

    }else{

      //Esta l�gica est� baseada na equa��o da sequ�ncia de fibonacci. Fibo1 seria o termo anterior e fibo2 o termo anterior ao fibo1.
      fibo1 = fibo;
      fibo = fibo1 + fibo2;
      fibo2 = fibo1;

    }//FIM do if e else
  }//FIM do for

  //Imprimir uma barra, apenas por quest�es esteticas.
  printf("\n");

  return 0;
}//FIM do principal
