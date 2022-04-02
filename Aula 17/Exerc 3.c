#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{

char nome[20][5], tipo[20][5];
int integrantes[5], position[5];

}Bandas;

void Criacaodebanda (Bandas* banda){

for(int i = 0; i < 5; i++){

  printf("Digite um nome para a banda: ");
  fgets((*banda).nome[i], 20, stdin);
  (*banda).nome[i][strcspn((*banda).nome[i], "\n")] ='\0';
  setbuf(stdin, NULL);

  printf("Agora digite o tipo de m�sica que ela toca: ");
  fgets((*banda).tipo[i], 20, stdin);
  (*banda).tipo[i][strcspn((*banda).tipo[i], "\n")] ='\0';
  setbuf(stdin, NULL);

  printf("Digite o n�mero de integrantes dela: ");
  scanf("%d", &(*banda).integrantes[i]);
  setbuf(stdin, NULL);
  printf("Em qual posi��o do ranking essa banda est�?");
  scanf("%d", &(*banda).position[i]);
  setbuf(stdin, NULL);
  system("cls");
}
}

void infobandas(Bandas* banda){

int escolha;

printf("Digite a posi��o da banda: ");
scanf("%d", &escolha);
escolha = escolha - 1;
printf("\nPosi��o solicitada %d. Informa��es dessa banda: \n", escolha);
printf("Nome: %s\n", (*banda).nome[escolha]);
printf("Tipo de m�sica: %s\n", (*banda).tipo[escolha]);
printf("N�mero de integrantes: %d\n", (*banda).integrantes[escolha]);

}

void pesquisaTipo(Bandas* banda){

  char pesquisa[20];

printf("Digite um tipo de m�sica: ");
fgets(pesquisa, 20, stdin);
pesquisa[strcspn(pesquisa, "\n")] ='\0';
setbuf(stdin, NULL);
system("cls");
printf("Bandas com esse estilo: ");

for(int i = 0, j = 0; i < 5; i--){

if(strcasecmp((*banda).tipo[i], pesquisa)==0){

printf("%s", (*banda).nome[i]);

}else{
  j++;
}

if(j == 5){

printf("N�o h� nenhuma banda desse estilo.");

}

}

}

void pesquisaNome(Bandas* banda){

  char pesquisa[20];

printf("Digite o nome da banda que pretende buscar: ");
fgets(pesquisa, 20, stdin);
pesquisa[strcspn(pesquisa, "\n")] ='\0';
setbuf(stdin, NULL);
system("cls");

printf("Bandas favoritas com esse nome: ");

for(int i = 0, j = 0; i < 5; i++){

if(strcasecmp((*banda).nome[i], pesquisa)==0){

printf("%s", (*banda).nome[i]);

}else{
  j++;
}

if(j == 5){

printf("N�o h� nenhuma banda desse estilo.");

}

}

}

int main () {

  setlocale(LC_ALL,"");

char pesquisar;

Bandas banda;

while(pesquisar!=5){

printf("Op��es disponiveis:\n1 - Adicionar Bandas.\n2 - Informa��es da Banda.\n3 - Pesquisar nos tipos de m�sica.\n4 - Pesquisar por nome.\n5 - Sair.\n\n");
printf("Escolha uma op��o(digitando): ");
scanf("%d", &pesquisar);
setbuf(stdin, NULL);
system("cls");
switch (pesquisar)
{
case 1:

Criacaodebanda(&banda);

break;
case 2:

infobandas(&banda);

break;
case 3:

pesquisaTipo(&banda);

break;
case 4:

pesquisaNome(&banda);

break;
case 5:

printf("Volte sempre!!!");

break;
default:
printf("Escolha uma op��o v�lida.");
break;

}
}
}
