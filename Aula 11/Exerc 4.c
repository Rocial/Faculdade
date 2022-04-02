/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 27/07/2021
*brief: Exercício da aula 11 sobre vetores
*Fazer um programa que leia e armazene valores dentro de duas variaveis vetores,
*depois some elas e imprima o resultado da soma de cada posição de vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int vt[8];
int soma;

int main (){

setlocale(LC_ALL,"");

for(int a = 0; a <= 7; a++){printf("Digite o valor: "); scanf("%d", &vt[a]);}

soma = vt[0] + vt[1] + vt[2] + vt[3] + vt[4] + vt[5] + vt[6] + vt[7];

printf("A soma de todos os valores é: %d\n\n", soma);

}
