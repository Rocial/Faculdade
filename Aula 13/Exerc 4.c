/*
*@file: Exerc 1.c
*name: Fernando Rafael
*date: 29/07/2021
*brief: Exercício 1 da aula 13, usando string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char nome[27];

int main () {

setlocale(LC_ALL,"");

while(1) {
printf("Digite o nome: ");
fgets(nome, 27, stdin);
nome[strcspn(nome,"\n")]='\0';
setbuf(stdin, NULL);

if(strlen(nome) <= 5){
printf("O nome tem menos de 5 caracteres. Tente novamente! ");
}else{

printf("\n\nSeu nome: %s\n\n", nome);
break;

}
}
}
