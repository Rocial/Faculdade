#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[20];
  char curso[20];
  char situacao[10];
  float notas[4];
  float media;
}Alunos;

int main () {

Alunos aluno;

printf("Digite o nome do aluno: ");
fgets(aluno.nome, 20, stdin);
aluno.nome[strcspn(aluno.nome, "\n")] ='\0';
setbuf(stdin, NULL);
printf("Digite agora o curso do aluno: ");
fgets(aluno.curso, 20, stdin);
aluno.curso[strcspn(aluno.curso, "\n")] ='\0';
setbuf(stdin, NULL);
printf("Agora as notas desse aluno: ");
for(int i = 0; i < 4; i++){

scanf("%f", &aluno.notas[i]);

}

aluno.media = (aluno.notas[1] + aluno.notas[2] + aluno.notas[3] + aluno.notas[4])/4;

int media = aluno.media;

if(media >= 7){

aluno.situacao[10] = "Aprovado";

}else if(media < 7 && media >= 3){

aluno.situacao[10] = "Exame";

}else if(media < 3){

aluno.situacao[10] = "Reprovado";

}

system("cls");

printf("--------------Informações do Aluno %s--------------\n", aluno.nome);
printf("Notas: %.2f, %.2f, %.2f, %.2f.", aluno.notas[1], aluno.notas[2], aluno.notas[3], aluno.notas[4]);
printf("A média das notas: %.2f", aluno.media);
printf("Situação: %s", aluno.situacao);
printf("----------------------------------------------------");

return 0;
}
