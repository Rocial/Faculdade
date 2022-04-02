/*
*@file: Exerc 1.c
*name: Fernando Rafael
*date: 04/07/2021
*brief: Exercício 1 da aula 13, usando string.
*.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char frase[100];
int vogal;

  int main () {

    setlocale(LC_ALL,"");

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase,"\n")]='\0';
    setbuf(stdin, NULL);

int tamanho = strlen(frase);

    for(tamanho; tamanho >= 0; tamanho--){

      if(tolower(frase[tamanho]) == 'a' || tolower(frase[tamanho]) == 'e' || tolower(frase[tamanho]) == 'i' || tolower(frase[tamanho]) == 'o' || tolower(frase[tamanho]) == 'u'){
        vogal = ++vogal;
      }

    }
printf("\nTem %d vogais nesta frase.\n\n", vogal);
}
