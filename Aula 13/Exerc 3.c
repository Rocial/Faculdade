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

char nomes[5][27];
int tele[5];

int main () {

  setlocale(LC_ALL,"");

  for (int i = 0; i < 5; i++) {

  int s = i + 1;
  printf("Digite o nome %d: ", s);
  fgets(nomes[i], 27, stdin);
  nomes[i][strcspn(nomes[i],"\n")]='\0';
  fflush(stdin);
  printf("Agora digite o seu telefone: ");
  scanf("%d", &tele[i]);
  fflush(stdin);
  }

int escolha;


  while(escolha != -1){
    printf("\nEscolha sua opção: ");
    scanf("%i", &escolha);
    if(escolha == 1){
printf("1 - %s Contato: %d", nomes[0], tele[0]);
}else if(escolha == 2){
printf("2 - %s Contato: %d", nomes[1], tele[1]);
}else if(escolha == 3){
printf("3 - %s Contato: %d", nomes[2], tele[2]);
}else if(escolha == 4){
printf("4 - %s Contato: %d", nomes[3], tele[3]);
}else if(escolha == 5){
printf("5 - %s aContato: %d", nomes[4], tele[4]);
}else{
printf("Esse contato é inexistente. Digite novamente.");
}
}
}
