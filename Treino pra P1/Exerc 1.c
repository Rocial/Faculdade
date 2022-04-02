#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mais_velho = 0, mais_alto = 0;
float teste;

typedef struct {

char nome[5][20], esporte[5][20];
int idade[5];
float altura[5];

}Estrutura_dos_Atletas;

int main (){

  Estrutura_dos_Atletas atletas;

for(int i = 0; i < 5; i++){

printf("Digite o nome do atleta %d: ", i+1);
fgets(atletas.nome[i], 20, stdin);
atletas.nome[i][strcspn(atletas.nome[i], "\n")] ='\0';
setbuf(stdin, NULL);

printf("Digite o esporte do atleta %d: ", i+1);
fgets(atletas.esporte[i], 20, stdin);
atletas.esporte[i][strcspn(atletas.esporte[i], "\n")] ='\0';
setbuf(stdin, NULL);

printf("Digite a idade do atleta %d: ", i+1);
scanf("%d", &atletas.idade[i]);
setbuf(stdin, NULL);

printf("Digite a altura do atleta %d: ", i+1);
scanf("%f", &atletas.altura);
setbuf(stdin, NULL);

if(mais_velho < atletas.idade[i])
{

mais_velho = i;

}

if(mais_alto < atletas.altura[i])
{

mais_alto = i;

}
}

system("cls");

printf("O atleta mais alto: %s\n\n", atletas.nome[mais_alto]);
printf("O atleta mais velho: %s\n\n", atletas.nome[mais_velho]);

}
