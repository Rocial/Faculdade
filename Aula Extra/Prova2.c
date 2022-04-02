/*@file: Exerc 1.c
*name: Fernando Rafael
*date: 24/08/2021
*brief: A comiss�o organizadora das Olimp�adas de Tokyo 2020 gostou do seu trabalho na prova anterior e lhe passou mais uma tarefa.
*Agora para ajudar no Salto em Dist�ncia. Para isso, fa�a um programa que armazene os dados de 5 atletas, cada atleta possui nome (20 caracteres), e a distancia de tr�s saltos (real) e o maior salto (que dever� ser determinado a partir dos tr�s saltos).
*Para isso, fa�a cada item abaixo em uma fun��o diferente:
*a) Fa�a um programa que receba os dados dos 5 atletas: nome(strings) e 3 saltos ( matriz 5x4 - valores entre 2 e 10 metros inclusive). Solicite novos valores caso o usu�rio digite fora da faixa permitida.
*b) Calcule o maior salto de cada atleta, utilizando um la�o for, e salve na �ltima coluna da matriz dos saltos;
*c) Exiba em formato de tabela (alinhada) os nomes, e o maior salto de todos os atletas que saltaram 5 metros ou mais ( com duas casas decimais).
*d) Utilizando la�os de repeti��o, calcule e exiba a m�dia dos maiores saltos dos 5 atletas.
*e) Exiba o nome do atleta e a distancia do melhor salto do atleta que saltou a menor dist�ncia (duas casas decimais).
*/


//Bibliotecas utilizadas nesse c�digo.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
*-------------------------------------------------------------------------------------------------------------------
*Professor, eu descartei a letra f.
*-------------------------------------------------------------------------------------------------------------------
*/

//Variaveis
char nomes[5][20];
float saltos[5][4];
float media = 0;
int contador = 0;
float menordistancia = 10;

//Fun��o A
void Letra_A (){
  //Repeti o for em rela��o a i
  for(int i = 0; i < 5; i++){
    printf("Digite o nome dos atletas: ");//Mensagem na tela
    fgets(nomes[i], 20, stdin);
    nomes[i][strcspn(nomes[i],"\n")]='\0';
    fflush(stdin);
    for(int j = 0; j < 3; j++){
      int s = j + 1;
      printf("Digite o valor do salta %d:", s);
      scanf("%f", &saltos[i][j]);
      fflush(stdin);
      if(saltos[i][j] < 2 || saltos[i][j] > 10){

        while(1){
          printf("Apenas valores de 2 a 10 metros. Digite novamente:");
          scanf("%f", &saltos[i][j]);
          fflush(stdin);
          if(saltos[i][j] >= 2 && saltos[i][j] <= 10){
            break;
          }
        }
      }
    }
  }
}
//Fun��o de B
void Letra_B(){

  for(int a = 0; a < 5; a++){

    saltos[a][3] = 0;

    for(int b = 0; b < 3; b++){

      if(saltos[a][3] < saltos[a][b]){

        saltos[a][3] = saltos[a][b];

      }

    }
  }
}
//Fun��o de C
void Letra_C(){
  printf("Atletas                  |Maior Salto\n\n");
  for(int a = 0, n = 1; a < 5; a++, n++){
    if(saltos[a][3] >= 5){
      printf("%d - %-20s |", n, nomes[a]);
      printf("%.2f\n", saltos[a][3]);
    }
  }

}
//Fun��o de D
void Letra_D(){

  for(int a = 0, n = 1; a < 5; a++, n++){

    media = saltos[a][3] + media;

  }
  media = media/5;
  printf("\nA m�dia de saltos foi de %.2f\n", media);
}
//Fun��o de E
void Letra_E(){

  for(int a = 0; a < 5; a++){
    if(saltos[a][3] <= menordistancia){

      menordistancia = saltos[a][3];
      contador = a;

    }
  }
  printf("\nO atleta %s onde seu maior salto foi de %f saltou a menor dist�ncia entre os atletas.\n\n", nomes[contador], menordistancia);
}

//Principal
int main () {
  
  //Corrigi alguns caracteres
  setlocale(LC_ALL,"");

  //Para saber os atletas e seus saltos
  Letra_A();
  //Limpar o cmd
  system("cls");
  //Maior salto de cada um
  Letra_B();
  Letra_C();
  Letra_D();
  Letra_E();

  return 0;
}
