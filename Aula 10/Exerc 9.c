/*@file: Exerc 9.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exercício da aula 10 sobre repetição usando for
*Fazer um programa que recebe um valor e faça um quadrado utilizando o valor como a medida dos lados (usando #)
*/

//Bibliotecas para adicionar as funções.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As variaveis.
int lado;
int lado1;
int lado2;

int main (){

  //Para a correção de alguns caracteres.
  setlocale(LC_ALL,"");

  //Imprimi a mensagem e salva o valor digitado no endereço lado.
  printf("Digite o tamanho: ");
  scanf("%d", &lado);

  //Lógica para que repita o bloco abaixo até que lado1 seja igual ou menor do que 0.
  //Toda vez que o bloco se repetir lado1 decrementa um de lado1.
  for(lado1 = lado; lado1 > 0; lado1--){

    //Para saltar as linhas do quadrado.
    printf("\n");

    //Esse for repetirá o bloco abaixo, onde lado2 = lado, e a lógica continuirá a repetir enquanto lado2 for maior do que 0.
    //Em toda repetição ele decrementa um valor de lado2.
    for(lado2 = lado; lado2 > 0; lado2--){

      //Imprimi o caracter #.
      printf("# ");

    }
  }

  //Imprimi um enter para questões estéticas e organizacionais.
  printf("\n");

}
