/*
*@file: Exerc 1.c
*name: Fernando Rafael
*date: 29/07/2021
*brief: Exercício 2 da aula 13, usando string.
*.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char nomes[5][27];
float salario[5];

int main () {

  setlocale(LC_ALL,"");

  for (int i = 0; i < 5; i++) {

    int s = i + 1;
    printf("Digite o nome %d: ", s);
    fgets(nomes[i], 27, stdin);
    nomes[i][strcspn(nomes[i],"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Agora digite o seu salário: R$");
    scanf("%f", &salario[i]);
    setbuf(stdin, NULL);

  }

  printf("\nLista de nomes: \n");
  for(int i = 0; i < 5; i++){

    salario[i] = (salario[i] * 0.08) + salario[i];
    int s = i + 1;
    printf("\n%d - %s e seu salário: %2f\n\n", s, nomes[i], salario[i]);

  }
}
