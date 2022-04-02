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

char estados[] = "spmgesrjrspasc";
char est[7][30] = {"São Paulo", "Minas Gerais", "Espírito Santo", "Rio de Janeiro", "Rio Grande do sul", "Paraná", "Santa Catarina"};

char sigla[2];
int cont;
int cont1;

int main (){

 printf("Digite a sigla do estado: ");
 fgets(sigla, 2, stdin);
 sigla[strcspn(sigla,"\n")]='\0';
 setbuf(stdin, NULL);

 for(int i = 0; i < 14 && cont < 2; i++){

  if(strcasecmp(sigla[i],estados)==0){

    cont = ++cont;

    }else{

    cont1 = ++cont1;

    }
}
    if((cont1%2) != 0){

      printf("Esse estado não existe nessas regiões");

    }else{

      cont = cont / 2;
      printf("%s, ", est[cont]);
      if(cont <= 4){

  printf("Sudeste.");

      }else{

  printf("Sul");


    }
    }
  }
