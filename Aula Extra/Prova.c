/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 24/08/2021
*brief: Faça um programa que receba duas frases com o tamanho máximo de 30 caracteres cada.

Se Frase1 e Frase2 tiverem o mesmo tamanho, o programa deverá criar uma NOVA string Frase3, contendo a primeira e segunda frases intercaladas.
Exemplo:
Frase1: BRASIL
Frase2: parana
Frase3: BpRaArSaInLat


 Se Frase1 e Frase2 tiverem tamanhos diferentes, deve-se gerar uma NOVA string Frase3, que é o resultado da concatenação de Frase1 com Frase2 com um caractere de espaço entre elas.

Exemplo:
Frase1: BRASIL
Frase2: UTFPR
Frase3: BRASIL UTFPR
*/


//Bibliotecas utilizadas nesse código.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



//Váriaveis usadas neste código;
char frase1[30], frase2[30], frase3[60];

//Principal
int main (){

//--------------------------Parte 1--------------------------
  printf("Digite uma frase: ");//Imprimi uma mensagem na tela
  fgets(frase1, 30, stdin);//Pega o que está sendo escrito na tela e armazena na varíavel.
  frase1[strcspn(frase1,"\n")]='\0';//Transforma o enter em um espaço vazio na varíavel.
  setbuf(stdin, NULL);//Reseta o buffer
  printf("Agora digite a outra frase: ");//Imprimi uma mensagem na tela
  fgets(frase2, 30, stdin);//Pega o que está sendo escrito na tela e armazena na varíavel.
  frase2[strcspn(frase2,"\n")]='\0';//Transforma o enter em um espaço vazio na varíavel.
  setbuf(stdin, NULL);//Reseta o buffer
//--------------------------Parte 1--------------------------

//--------------------------Parte 2--------------------------
//Lógica de if, onde ele combara ambas frases, afim de saber se ambas são iguais,
//Retornando um valor 0 no caso.
  if(strcasecmp(frase1,frase2)==0){//if

//Repeti baseado em na quantidade de palavras na frase1. Onde enquanto a for menor ou igual,
//Incrementa em a.
    for(int a = 0, b = 0; a <= strlen(frase1); a++, b++){//For

      frase3[b] = frase1[a];//Subistitui a posição b de frase3, pela posição a de frase1.
      b++;//Incrementa em b.
      frase3[b] = frase2[a];//Subistitui a posição b de frase3, pela posição a de frase1.
    }//Fim do for
    printf("%s\n\n", frase3);//Imprimi uma mensagem na tela
  }//Fim de if
  else{//else
    strcat(frase3, frase1);//Contatena, colocando o frase1 em frase3
    strcat(frase3," ");//Contatena, colocando o espaço em frase3
    strcat(frase3, frase2);//Contatena, colocando o frase2 em frase3
    printf("%s\n\n", frase3);//Imprimi uma mensagem na tela

  }//Fim de else

}
//--------------------------Parte 2--------------------------
