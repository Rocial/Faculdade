#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct
{
char nome[10],sexo[10],estado_civil[12],grau[12],canal[10];
int idade,horario;
} ENQUETE;

void ler_dados(ENQUETE *read)
{
printf("\n Digite o Nome: ");
scanf("%s", read->nome);fflush(stdin);
printf("\n Digite a idade: ");
scanf("%d", &read->idade);fflush(stdin);
printf("\n Digite o sexo(Masculino,Feminino ou Outro): ");
scanf("%s", read->sexo);fflush(stdin);
printf("\n Digite o Estado Civil(Solteiro,Casado,Viúvo ou Divorciado): ");
scanf("%s", read->estado_civil);fflush(stdin);
printf("\n Digite o Grau de Instrução(Fundamental,Médio,Superior,\n Mestrado ou Doutorado): ");
scanf("%s", read->grau);fflush(stdin);
printf("\n Digite o Horário da entrevista: ");
scanf("%d",&read->horario);fflush(stdin);
printf("\n Digite o Canal(Globo,Band ou SBT): ");
scanf("%s", read->canal);fflush(stdin);
}

void checar_enquete(ENQUETE read[10], int j)
{
    int i = 0;

    while (i < j) {
printf("\n-------------------- ENQUETES %d --------------------------\n",i);
printf("\n Nome: %s",read[i].nome);
printf("\n Idade: %d",read[i].idade);
printf("\n Sexo: %s",read[i].sexo);
printf("\n Estado Civil: %s",read[i].estado_civil);
printf("\n Grau de Instrução: %s",read[i].grau);
printf("\n Horário da Entrevista: %d",read[i].horario);
printf("\n Canal: %s",read[i].canal);
printf("\n-------------------------------------------------------------------\n");
i++;
}
}

int main()
{
setlocale(LC_ALL,"portuguese");
ENQUETE ler[10];
int i=0,opcao;
printf("\n-------------------- ENQUETE IBOPE --------------------\n");
do {

    printf("\n Opção: ");
    scanf("%d",&opcao);
    if (opcao == 3) break;
    switch(opcao)
    {
    case 1:
        ler_dados(&ler[i]);
        i=i+1;
        break;
    case 2:
        checar_enquete(ler, i);
        break;
    case 3:
        return 0;
        break;
    }
} while (opcao != 3);
}
