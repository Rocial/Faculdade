#include <stdio.h>
#include <stdlib.h>

char nome[30];
FILE *arq;

int main ()
{

printf("Digite o nome do arquivo: ");
fgets(nome, 30, stdin);
nome[strcspn(nome, "\n")]='\0';
setbuf(stdin, NULL);
fopen()

}
