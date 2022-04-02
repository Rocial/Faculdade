/*
*@file: prova.c
*name: Fernando Rafael
*date: 08/12/2021
*brief: Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.
Você foi convocado pela Amazon em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, a central da Amazon está recebendo as notificações de falhas ao redor do mundo. Você devera implementar um sistema para salvar e processar essas notificações. Para isso:

a) (5 pontos) Aloque dinamicamente um vetor de Notificações de tamanho 5. Cada Notificação contém:

Pais (string tam: 20):
Cidade(string tam: 20):
Quantidade de Servidores UP - ativos (inteiro)
Quantidade de Servidores Down - com problemas (inteiro)
Os países possíveis são: Brasil, EUA, Franca, Londres, China e Japao (sem acentos)

b) (10 pontos) Receba os dados de diversos relatórios de falhas e vá armazenando neste vetor. A cada vez que o tamanho do vetor se tornar insuficiente, realoque seu tamanho aumentando o vetor em 5 unidades. Ao receber o valor "fim" como entrada de um pais, o sistema de entradas deverá parar e o vetor tamanho do vetor ajustado ao tamanho exato da quantidade de relatórios.

c) (5 pontos) Salve os dados em um aquivo BINÁRIO chamado "notifications.dat". Feche o arquivo e libere a memória utilizada pelo vetor;

d) (5 pontos) Abra o arquivo gerado anteriormente, carregue os dados em um novo vetor de Relatórios alocado dinamicamente. E exiba os dados em uma tabela na tela.

e) (5 pontos) Calcule o total de servidores ativos, com problemas e o percentual de servidores com problemas em cada país. Exiba os dados na tela e gere um arquivo MODO TEXTO chamado "report.txt" no seguinte formato:
PAIS     |UP   |DOWN | RATE|
Brasil   |   80|   30|  25%|
EUA      |  200|   50|  20%|
França   |   80|    5|   6%|
Londres  |  100|    0|   0%|
China    |  117|    3|   3%|
Japão    |   45|    0|   0%|
*.
*/

//bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Estrutura
typedef struct
{
  char pais[21];
  char cidade[21];
  int up;
  int down;
} SistemasDeFalhas;

//Comando principal
int main ()
{
  int cont = 0;
  int aux = 4;

  //Alocando o notificacao
  SistemasDeFalhas* notificacao = (SistemasDeFalhas*) malloc (5*sizeof(SistemasDeFalhas));

  //inicio do if
  if(notificacao == NULL)
  {
    //printa mensagem no cmd
    printf("Erro: Memória Insuficiente!\n\n");
    //Fecha o programa
    exit(1);

  }//fim do if

  //printa mensagem no cmd.
  printf("Sistema de notificacao de falhas:");
  //Repetição para a lógica
  while(1){
    //inicio do if
    if(cont == aux)
    {
      //Auxiliar para realocar o vetor da estrutura
      aux = aux + 5;
      //realoca o vetor da estrutura
      notificacao = realloc (notificacao, (aux+1)*sizeof (SistemasDeFalhas));

    }//fim do if
    //printa e salva na variavel do vetor da estrutura
    printf("\n\nNos informe qual o seu pais: ");
    fgets(notificacao[cont].pais, 21, stdin);
    notificacao[cont].pais[strcspn(notificacao[cont].pais,"\n")]='\0';
    setbuf(stdin, NULL);
    //inicio do if
    if(strcasecmp(notificacao[cont].pais, "fim")==0)
    {
      break;
    }//fim do if
    //printa e salva na variavel do vetor da estrutura
    printf("\n\nNos informe qual a sua cidade: ");
    fgets(notificacao[cont].cidade, 21, stdin);
    notificacao[cont].cidade[strcspn(notificacao[cont].cidade,"\n")]='\0';
    setbuf(stdin, NULL);
    //printa e salva na variavel do vetor da estrutura
    printf("\n\nNos informe a quantidade de servidores Up: ");
    scanf("%d", &notificacao[cont].up);
    setbuf(stdin, NULL);
    //printa e salva na variavel do vetor da estrutura
    printf("\n\nNos informe a quantidade de servidores Down: ");
    scanf("%d", &notificacao[cont].down);
    setbuf(stdin, NULL);
    //contador
    cont++;

  }

  //realoca o vetor da estrutura
  notificacao = realloc (notificacao, (cont+1)*sizeof (SistemasDeFalhas));
  //Abre o arquivo
  FILE *notif = fopen("notifications.dat","wb");
  //inicio do if
  if(notif == NULL)
  {
    //printa mensagem
    printf("Erro ao abrir arquivo!\n\n");
    //fecha o programa
    exit(1);

  }//fim do if
  //For para repetição
  for(int i = 0; i < cont; i++)
  {
    //Escreve no arquivo em binário
    fwrite(notificacao[i].pais, sizeof(SistemasDeFalhas),21,notif);
    fwrite(notificacao[i].cidade, sizeof(SistemasDeFalhas),21,notif);
    fwrite(&notificacao[i].up, sizeof(SistemasDeFalhas),1,notif);
    fwrite(&notificacao[i].down, sizeof(SistemasDeFalhas),1,notif);

  }
  //fecha arquivo e libera variavel
  fclose(notif);
  free(notificacao);

  //Alloca a variavel
  SistemasDeFalhas* relatorios = (SistemasDeFalhas*) malloc ((cont+1)*sizeof(SistemasDeFalhas));
  //Abre o arquivo
  FILE *notif2 = fopen("notifications.dat","rb");
  //inicio do if
  if(notif2 == NULL)
  {
    //Printa mensagem de erro
    printf("Erro ao abrir arquivo!\n\n");
    //fecha programa
    exit(1);

  }//fim do if
  //for para repetição
  for(int i = 0; i < cont; i++)
  {
    //ler o que está salvo no arquivo
    fread(relatorios[i].pais, sizeof(SistemasDeFalhas),21,notif);
    fread(relatorios[i].cidade, sizeof(SistemasDeFalhas),21,notif);
    fread(&relatorios[i].up, sizeof(SistemasDeFalhas),1,notif);
    fread(&relatorios[i].down, sizeof(SistemasDeFalhas),1,notif);

  }
  //monta a tabelinha
  printf("  |Pais                  |Cidade               |Up    |Down  |Rate   |\n\n");
  //for para repetição
  for(int i = 0; i < cont; i++)
  {
    //printa a tabelinha
    printf("%d - %-21s|%-21s|%-6d|%-6d|%-6d%%|\n", i+1, relatorios[i].pais, relatorios[i].cidade, relatorios[i].up, relatorios[i].down, (100 * relatorios[i].down)/(relatorios[i].up + relatorios[i].down));

  }
  //fecha o arquivo
  fclose(notif);
  //libera memoria
  free(relatorios);
  //return do main
  return 0;
}
