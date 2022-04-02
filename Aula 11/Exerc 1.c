/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 27/07/2021
*brief: Exerc�cio da aula 11 sobre vetores
*Fazer um programa que leia e armazene valores dentro de duas variaveis vetores,
*depois some elas e imprima o resultado da soma de cada posi��o de vetor.
*/

//Bibliotecas para adicionar as fun��es
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As variaveis
int list1[5];//A variavel pedida pelo exercicio, para que possa salvar e somar os valores
int list2[5];//A variavel pedida pelo exercicio, para que possa salvar e somar os valores
int vetorsoma[5];//Variavel onde ser� salva os valores;

//Principal
int main (){

  //Corrigi alguns caracteres
  setlocale(LC_ALL,"");

  //Repetir� dentro da l�gica, onde enquanto seriep for menor ou igual a dois,
  //O bloco abaixo repete e incrementa mais um a seriep.
  for(int seriep = 1; seriep <= 2; seriep++){

    //Repetir� dentro da l�gica, onde enquanto serieq for menor ou igual a cinco,
    //O bloco abaixo repete e incrementa mais um a serieq.
    for(int serieq = 1; serieq <= 5; serieq++){

      //L�gica if e else para a troca de listas
      if(seriep == 1){

        //Imprimi a mensagem entre "", e salva os valores digitados no endere�o da vetor list1.
        //Vale relembrar que a variavel serieq serve para saber em qual posi��o salvar o valor digitado.
        printf("Digite os valores a serem salvos na lista 1: ");
        scanf("%d", &list1[serieq]);

        //Para caso a condi��o de if seja falsa, execute ent�o o else.
      }else{

        //Imprimi a mensagem entre "", e salva os valores digitados no endere�o da vetor list2.
        //Vale relembrar que a variavel serieq serve para saber em qual posi��o salvar o valor digitado.
        printf("Digite os valores a serem salvos na lista 2: ");
        scanf("%d", &list2[serieq]);

      }//Fim do if e else
    }//FIM do for interno
  }//FIM do for externo

  //Imprimi a mensagem abaixo na tela.
  printf("Essas s�o as somas sequencialmente dos valores dentro dos vetores: ");

  //Repetir� dentro da l�gica, onde enquanto serier for menor ou igual a cinco,
  //O bloco abaixo repete e incrementa mais um a serier.
  for(int serier = 1; serier <= 5; serier++){

    //Soma os vetores list1 e list2, e al�m disso, salva os valores no vetorsoma.
    //Vale relembrar que a variavel serier serve para saber em qual posi��o somar e salvar em vetorsoma
    vetorsoma[serier] = list1[serier] + list2 [serier];

    //Imprimi os valores salvos em vetorsoma
    //Vale relembrar que a variavel serier serve para saber em qual posi��o imprimi o valor.
    printf("%d, ", vetorsoma[serier]);

  }//FIM do for
  //Acrecentar dois enter para quest�es est�ticas.
  printf("\n\n");

  return 0;
}//FIM do principal
