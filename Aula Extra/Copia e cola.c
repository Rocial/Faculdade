//Fgets
printf("Digite o nome do carro: ");
fgets(nome[i], 20, stdin);
nome[i][strcspn(nome[i],"\n")]='\0';
setbuf(stdin, NULL);

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//Struct
typedef struct{
  int x, y, z;
  float x, y, z;
  char seila[][];
}nome;

//For com if
for(int i = 0; i < 1; i++){

if(logica1 <= logica2){

}
}

//Para escrever a matriz
for(int l = 0; l <= 3; l++){
for(int c = 0; c <= 2; c++)
{
printf("digite o valor na linha e coluna da matriz [%d][%d]: ", l, c);
scanf("%d", &matriz[l][c]);
}

//Para printar a matriz
for(int l = 0; l <= 3; l++)
{
printf("\n");
for(int c = 0; c <= 2; c++)
{
printf("%d ", matriz[l][c]);

}
}
//For com duas variaveis
for(int a = 0, b = 0; a < 0 && b > 0; a++ b--){


}
//For
for(int i = 0; i < 10; i++){



}

//Um menu com repeti��o
while(1)

printf("Escolha uma das op��es: ");
printf("op��o 1");
printf("op��o 2");
printf("op��o 3");
printf("op��o 4");
printf("Digite sua op��o: ");
scanf("%s", variavel);

 //ou
 while(1)
 {
 printf("Escolha uma das op��es: ");
 printf("op��o 1");
 printf("op��o 2");
 printf("op��o 3");
 printf("op��o 4");
 printf("Digite sua op��o: ");
 scanf("%d", number);

}
//If de compara��o
if(strcasecmp(variavel1, variavel2)==0)
{



}

//Para criar algo escrevendo

void seila (struct* variavelponteiro){

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

//Para Pesquisar

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

//Um de pesquisa mais completo
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
