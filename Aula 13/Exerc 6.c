/*
*@file: Exerc 1.c
*name: Fernando Rafael
*date: 29/07/2021
*brief: Exercício 1 da aula 13, usando string.
*.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char nome[15];
char sbn[15];
char modamer[30];

int main (){

 printf("Digite o seu nome: ");
 fgets(nome, 15, stdin);
 nome[strcspn(nome,"\n")]='\0';
 printf("Digite o seu sobrenome: ");
 fgets(sbn, 15, stdin);
 sbn[strcspn(sbn,"\n")]='\0';

int n1 = strlen(sbn);
int n2 = strlen(nome);
int i = 0;

strcat(modamer, sbn);
strcat(modamer, nome);

printf("Nome(Modelo Americano): ");

for(i; n1 > i; i++){

printf("%c", modamer[i]);

}
printf(", ");
n2 = n1 + n2;

for(i; n2 >= i; i++){

printf("%c", modamer[i]);

}
}
