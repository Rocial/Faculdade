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

int idade[10];
int cont;

int main (){

setlocale(LC_ALL,"");

for(int a = 0; a <= 9; a++)
{
printf("Digite a idade: ");
scanf("%d", &idade[a]);

if(idade[a] > 35){

cont = ++cont;

}
}
printf("Cerca de %d pessoas, tem mais de 35 anos\n\n", cont);
}
