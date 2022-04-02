#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
//Para o tamanho do vetor
#define tamanho 10

//Estrutura da Pilha Est�tica
typedef struct
{
  int Conversor[tamanho];
  int topo;
}PilhaEstatica;

//Verificar se a Pilha est� Vazia
bool PilhaVazia (PilhaEstatica *ponteiro)
{
  return (ponteiro->topo == -1);
}
//Verificar se a pilha est� Cheia
bool PilhaCheia (PilhaEstatica  *ponteiro)
{
  return (ponteiro->topo == tamanho-1);
}
//Inicia a Pilha
void IniciarPilhaEstatica (PilhaEstatica *ponteiro)
{
  ponteiro->topo = -1;
}

//Fun��o para Empilhar na pilha
void EmpilharnaPilha (PilhaEstatica *ponteiro, FILE *entrada, FILE *saida)
{//while para percorrer o arquivo de entrada e gravar na variavel da estrutura
int result;
  while(!feof(entrada))
  {

    if(!PilhaCheia){
    ponteiro->topo++;
    fscanf(entrada, "%d", ponteiro->Conversor[ponteiro->topo]);

  }else
  {
    //Controle de erros
    result = fprintf(saida, "Arquivo inv�lido");
    if(result == EOF)
    {
      printf("Erro de escrita na sa�da!\n");
      exit(1);
    }
    exit(1);

  }
}
}
//Fun��o para Desempilhar
void DesempilharPilha (PilhaEstatica *ponteiro, int *qtd)
{
  ponteiro->topo--;
  (*qtd)--;
}
//Fun��o para imprimir dentro do arquivo de saida
void ImprimirPilha (PilhaEstatica *ponteiro, FILE* saida)
{//Estrutura com pilha est�tica
  typedef struct{
    int bin [8];
    int topo;
    int aux;
  }Binario;

  Binario decimal;
  int result;
//Esquema de la�o repetitivo para transformar os valores salvos no vetor ponteiro->Conversor
  for(int i; i < ponteiro->topo; i++)
  {
    decimal.aux =  ponteiro->Conversor[i];
    decimal.topo = -1;
//L�gica de transforma��o decimal bin�rio, onde quando o resto for 0, adiciona 0 ou o resto for diferente de 0 adiciona o valor 1 formando um vetor de bits
    while(1)
    {
      if(decimal.aux == 0)
      {

        decimal.bin[decimal.topo] = 0;
        break;

      }
      if(decimal.aux % 2 == 0)
      {
        decimal.topo++;
        decimal.bin[decimal.topo] = 0;

      }else
      {
        decimal.topo++;
        decimal.bin[decimal.topo] = 1;
      }
    }//Imprimi na saida os bits depois da convers�o
    for(decimal.topo; decimal.topo >= 0; decimal.topo--)
    {
      result = fprintf(saida,"%d", decimal.bin[decimal.topo]);
      //Controle de Errros
      if(result == EOF)
      {
        printf("Erro de escrita na sa�da!\n");
        exit(1);
      }
    }
    result = fprintf(saida,"\n");
    if(result == EOF)
    {
      printf("Erro de escrita na sa�da!\n");
      exit(1);
    }
  }
}

//main
int main(int argc, char const *argv[]) {

  float verification;
  PilhaEstatica pilha;
  int result;

  IniciarPilhaEstatica(&pilha);
  //Abertura de Arquivos
  FILE *entrada = fopen(argv[1], "rt");
  FILE *saida = fopen(argv[2], "wt");
  //Controle de erros caso ocorra algum erro na abertura
  if(entrada == NULL || saida == NULL) {
    printf("Aten��o: Ocorreu um erro na abertura de algum dos arquivos!\n");
    exit(1);
  }
  //Para invalidar um arquivo
  while(!feof){

    fscanf(entrada, "%f", verification);
    if(verification != 0)
    {
      result = fprintf(saida, "Arquivo inv�lido");
      if(result == EOF)
      {
        printf("Erro de escrita na sa�da!\n");
        exit(1);
      }

    }


    EmpilharnaPilha(&pilha, entrada, saida);
    ImprimirPilha(&pilha, saida);

    //Fechamento dos arquivos
    fclose(entrada);
    fclose(saida);

return 0;
}
}
