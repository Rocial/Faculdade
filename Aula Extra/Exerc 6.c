#include <stdio.h>
#include <stdlib.h>

float notas[10];
float nota;
int repr;
int aprov;
int alta = 0;
int baixa = 10;
float media = 0;


int main (){

for(int a = 0; a <= 9; a++){printf("Digite a nota do aluno %d: ", a); scanf("%f", &notas[a]);
if(notas[a] > 10 || notas[a] < 0){
while(1){
printf("Digite a nota novamente: ");
scanf("%f", &notas[a]);
if(notas[a] <= 10 && notas[a] >= 0){
break;
}
}
}
if(notas[a] < 6){repr = ++repr;}
if(notas[a] >= 6){aprov = ++aprov;}
if(notas[a] > alta){alta = notas[a];}
if(notas[a] < baixa){baixa = notas[a];}
media = notas[a] + media;
}
system("cls");
media = media/10;
printf("\n%d alunos foram reprovados\n", repr);
printf("\n%d alunos foram aprovados\n", aprov);
printf("\nA media das notas e: %.1f\n", media);
printf("\n%d0%% dos alunos foram aprovados\n", aprov);
printf("\n%d foi a nota mais alta\n", alta);
printf("\n%d foi a nota mais baixa\n", baixa);
}
