#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tabela[5];
char nomes[5][20];
char aux[20];

typedef struct {

char nome[5][20], esporte[5][20];
int idade[5];
float altura[5];

}Estrutura_dos_Atletas;

int main (){

Estrutura_dos_Atletas atletas;
/*
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

}
*/
atletas.idade[0] = 2;
strcpy(atletas.nome[0], "fernando4");
atletas.idade[1] = 5;
strcpy(atletas.nome[1], "fernando2");
atletas.idade[2] = 6;
strcpy(atletas.nome[2], "fernando1");
atletas.idade[3] = 1;
strcpy(atletas.nome[3], "fernando5");
atletas.idade[4] = 4;
strcpy(atletas.nome[4], "fernando3");

system("cls");
for(int j = 0; j < 10; j++){
for(int k = 0; k < 4; k++){

printf("\n\n%d\n\n", j);
if(atletas.idade[k] > atletas.idade[k+1])
{

tabela[k] = atletas.idade[k];
tabela[k+1] = atletas.idade[k+1];
strcpy(nomes[k], atletas.nome[k]);
strcpy(nomes[k+1], atletas.nome[k+1]);
printf("%s\n\n%s permanece", nomes[k], nomes[k+1]);

}
else
{

tabela[k+1] = atletas.idade[k];
tabela[k] = atletas.idade[k+1];
strcpy(nomes[k+1], atletas.nome[k]);
strcpy(nomes[k], atletas.nome[k+1]);
printf("%s\n\n%s sobe e desce ", nomes[k], nomes[k+1]);

}
}
}

printf("Do atleta mais novo para o mais velho: ");
for(int i = 0; i < 5; i++)
{
  printf("%s, ", nomes[i]);
}
printf("\n\n");
return 0;
}
