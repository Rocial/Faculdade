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


int vetora[10];
int vetorb[10];


int main (){

  setlocale(LC_ALL,"");

  for(int a = 0; a <= 9; a++){printf("Digite os valores do vetor A: ");scanf("%d", &vetora[a]);}

  printf("O quadrado de cada valor sequencialmente �: ");

  for(int b = 0; b <= 9; b++){ vetorb[b] = vetora[b] * vetora[b]; printf("%d, ", vetorb[b]); }

}
