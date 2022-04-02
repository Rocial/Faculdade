/*@file: Exerc 8.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc�cio da aula 10 sobre repeti��o usando for
*Fazer uma programa que imprima a tabuada de 1 a 10.
*/

//Bibliotecas para adicionar as fun��es.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//As variaveis.
int result;

int main (){

  //Para a corre��o de alguns caracteres.
  setlocale(LC_ALL,"");

  //Para repetir o bloco abaixo (no caso for), onde, enquanto term1 for menor ou igual a 10,
  //Ele vai repetir e incrementar mais um a term1.
  for(int term1 = 1; term1 <= 10; term1++){

    //Imprimi a mensagem para mostrar em qual tabuada est�.
    printf("Tabuada do %d\n\n", term1);

    //Este for vai repetir, onde enquanto term2 for menor ou igual a 10,
    //O bloco vai se repetir e incrementar mais um a term2.
    for(int term2 = 1; term2 <= 10; term2++){

      //Continha de multiplica��o bas�ca
      result = term1 * term2;

      //Imprimi a mensagem com os numeros na suas respectivas posi��es.
      printf("%d x %d = %d\n", term1, term2, result);

    }//FIM do for interno

    //Acrecentar um enter para quest�es est�ticas.
    printf("\n");

  }//Fim do for externo
  return 0;
}//FIM do principal
