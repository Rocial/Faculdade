/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 27/07/2021
*brief: Exercício da aula 11 sobre vetores
*Fazer um programa que leia e armazene valores dentro de duas variaveis vetores,
*depois some elas e imprima o resultado da soma de cada posição de vetor.
*/

//Bibliotecas para adicionar as funções
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As variaveis
int list1[5];//A variavel pedida pelo exercicio, para que possa salvar e somar os valores
int list2[5];//A variavel pedida pelo exercicio, para que possa salvar e somar os valores
int vetorsoma[5];//Variavel onde será salva os valores;

//Principal
int main (){

  //Corrigi alguns caracteres
  setlocale(LC_ALL,"");

  //Repetirá dentro da lógica, onde enquanto seriep for menor ou igual a dois,
  //O bloco abaixo repete e incrementa mais um a seriep.
  for(int seriep = 1; seriep <= 2; seriep++){

    //Repetirá dentro da lógica, onde enquanto serieq for menor ou igual a cinco,
    //O bloco abaixo repete e incrementa mais um a serieq.
    for(int serieq = 1; serieq <= 5; serieq++){

      //Lógica if e else para a troca de listas
      if(seriep == 1){

        //Imprimi a mensagem entre "", e salva os valores digitados no endereço da vetor list1.
        //Vale relembrar que a variavel serieq serve para saber em qual posição salvar o valor digitado.
        printf("Digite os valores a serem salvos na lista 1: ");
        scanf("%d", &list1[serieq]);

        //Para caso a condição de if seja falsa, execute então o else.
      }else{

        //Imprimi a mensagem entre "", e salva os valores digitados no endereço da vetor list2.
        //Vale relembrar que a variavel serieq serve para saber em qual posição salvar o valor digitado.
        printf("Digite os valores a serem salvos na lista 2: ");
        scanf("%d", &list2[serieq]);

      }//Fim do if e else
    }//FIM do for interno
  }//FIM do for externo

  //Imprimi a mensagem abaixo na tela.
  printf("Essas são as somas sequencialmente dos valores dentro dos vetores: ");

  //Repetirá dentro da lógica, onde enquanto serier for menor ou igual a cinco,
  //O bloco abaixo repete e incrementa mais um a serier.
  for(int serier = 1; serier <= 5; serier++){

    //Soma os vetores list1 e list2, e além disso, salva os valores no vetorsoma.
    //Vale relembrar que a variavel serier serve para saber em qual posição somar e salvar em vetorsoma
    vetorsoma[serier] = list1[serier] + list2 [serier];

    //Imprimi os valores salvos em vetorsoma
    //Vale relembrar que a variavel serier serve para saber em qual posição imprimi o valor.
    printf("%d, ", vetorsoma[serier]);

  }//FIM do for
  //Acrecentar dois enter para questões estéticas.
  printf("\n\n");

  return 0;
}//FIM do principal
