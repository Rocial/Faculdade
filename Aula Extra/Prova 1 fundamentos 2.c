//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//Struct
typedef enum {Bronze, Prata, Ouro, Platina, Diamante, Desafiante} Tier;

typedef struct
{

  char nome[6][50];
  Tier player_tier[6];
  int victory[6], defeat[6], pontos[6];

}Dados_Jogadores;

void Registro_de_jogadores(Dados_Jogadores* jogadores)
{

  for(int i = 0; i < 6; i++){

    printf("Digite o nome do jogador: ");
    setbuf(stdin, NULL);
    fgets((*jogadores).nome[i], 50, stdin);
    (*jogadores).nome[i][strcspn((*jogadores).nome[i], "\n")] ='\0';
    setbuf(stdin, NULL);

    while(1)
    {

      printf("Digite o elo dele(Usando números, do Bronze ao Desafiante): ");
      scanf("%d", &(*jogadores).player_tier);
      setbuf(stdin, NULL);
      if((*jogadores).pontos[i] >= 1 || (*jogadores).pontos[i] <= 6)
      {

        break;

      }else
      {

        system("cls");
        printf("Porfavor, apenas do 1 ao 6 (Começando do bronze). ");

      }
    }

    while(1)
    {
      printf("Digite o número de vitórias do jogador: ");
      scanf("%d", &(*jogadores).victory[i]);
      setbuf(stdin, NULL);
      if((*jogadores).pontos[i] >= 0)
      {

        break;

      }else
      {

        system("cls");
        printf("Porfavor, apenas valores acima de zero. ");

      }
    }
    while(1){
      printf("Digite o número de derrotas do jogador: ");
      scanf("%d", &(*jogadores).defeat[i]);
      setbuf(stdin, NULL);
      if((*jogadores).pontos[i] >= 0)
      {

        break;

      }else
      {
        system("cls");
        printf("Porfavor, apenas valores acima de zero. ");

      }
    }
    while(1){
      printf("Digite o número de pontos do jogador: ");
      scanf("%d", &(*jogadores).pontos[i]);
      setbuf(stdin, NULL);
      if((*jogadores).pontos[i] >= 0)
      {

        break;

      }else
      {
        system("cls");
        printf("Porfavor, apenas valores acima de zero. ");

      }
    }

  }

}

float WinrateDoJogador (int vitorias, int derrotas)
{
  return (vitorias / (vitorias + derrotas)) * 100;
}

int Tabela_de_Lideres (int numbertier, Dados_Jogadores* jogadores)
{

  int lider;

  for(int i; i < 6; i++)
  {

    if((*jogadores).player_tier[i] = numbertier)
    {

      if((*jogadores).pontos[i] > lider)
      {

        int lider = i;

      }
    }
  }
  return lider;
}

void pesquisaNome(Dados_Jogadores* jogadores){

  char pesquisa[50];

  printf("Digite o nome do jogador: ");
  fgets(pesquisa, 50, stdin);
  pesquisa[strcspn(pesquisa, "\n")] ='\0';
  setbuf(stdin, NULL);
  system("cls");

  for(int i = 0, j = 0; i < 6; i++){

    if(strcasecmp((*jogadores).nome[i], pesquisa)==0){

      printf("O jogador %s.\n", (*jogadores).nome[i]);
      printf("Possui: %d vitórias, %d Derrotas, Está no tier %s e possui %d pontos", (*jogadores).victory[i], (*jogadores).defeat[i], (*jogadores).player_tier[i], (*jogadores).pontos);

    }else{
      j++;
    }

    if(j >= 5){

      printf("Não há nenhum jogador com esse nome.");

    }
  }
}

int SomaDePartidas(Dados_Jogadores jogadores, int i)
{

  if(i > 0)
  {
    return 0;
  }

  return jogadores.victory[i] + jogadores.defeat[i] + SomaDePartidas(jogadores, i - 1);

}

int main ()
{

  Dados_Jogadores jogadores;

  Registro_de_jogadores(&jogadores);

  pesquisaNome(&jogadores);



  system("cls");

  printf("\nTabela de líderes:\n\n");
  printf("No Tier Bronze o Jogador líder é o %s com %d pontos, %d vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(1, &jogadores)], jogadores.pontos[Tabela_de_Lideres(1, &jogadores)], jogadores.victory[Tabela_de_Lideres(1, &jogadores)], jogadores.defeat[Tabela_de_Lideres(1, &jogadores)]);
  printf("No Tier Prata o Jogador líder é o %s com %d pontos, % vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(2, &jogadores)], jogadores.pontos[Tabela_de_Lideres(2, &jogadores)], jogadores.victory[Tabela_de_Lideres(2, &jogadores)], jogadores.defeat[Tabela_de_Lideres(2, &jogadores)]);
  printf("No Tier Ouro o Jogador líder é o %s com %d pontos, %d vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(3, &jogadores)], jogadores.pontos[Tabela_de_Lideres(3, &jogadores)], jogadores.victory[Tabela_de_Lideres(3, &jogadores)], jogadores.defeat[Tabela_de_Lideres(3, &jogadores)]);
  printf("No Tier Platina o Jogador líder é o %s com %d pontos, %d vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(4, &jogadores)], jogadores.pontos[Tabela_de_Lideres(4, &jogadores)], jogadores.victory[Tabela_de_Lideres(4, &jogadores)], jogadores.defeat[Tabela_de_Lideres(4, &jogadores)]);
  printf("No Tier Diamante o Jogador líder é o %s com %d pontos, %d vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(5, &jogadores)], jogadores.pontos[Tabela_de_Lideres(5, &jogadores)], jogadores.victory[Tabela_de_Lideres(5, &jogadores)], jogadores.defeat[Tabela_de_Lideres(5, &jogadores)]);
  printf("No Tier Desafiante o Jogador líder é o %s com %d pontos, %d vitórias e %d derrotas.\n\n", jogadores.nome[Tabela_de_Lideres(6, &jogadores)], jogadores.pontos[Tabela_de_Lideres(6, &jogadores)], jogadores.victory[Tabela_de_Lideres(6, &jogadores)], jogadores.defeat[Tabela_de_Lideres(6, &jogadores)]);

  printf("Soma de todas as partidas de todos os jogadores: %d", SomaDePartidas(jogadores, 5));

  return 0;
}
