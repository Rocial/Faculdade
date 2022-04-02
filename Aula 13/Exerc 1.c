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

char nomes[10][27];

int main () {

setlocale(LC_ALL,"");

for (int i = 0; i < 10; i++) {

int s = i + 1;
printf("Digite o nome %d: ", s);
scanf("%27[^\n]", nomes[i]);
setbuf(stdin, NULL);
}

printf("\nLista de nomes: \n");
for(int i = 0; i < 10; i++){
  int s = i + 1;
printf("\n%d - %s\n\n", s, nomes[i]);

}
}
