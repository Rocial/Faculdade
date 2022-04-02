#include <stdio.h>
#include <stdlib.h>

int funcao (int n1, int n2, int n3){

  int retorno;

  if(n1 > n2 && n1 > n3){

    retorno = n1;

  }else if(n2 > n1 && n2 > n3){

    retorno = n2;

  }else if(n3 > n1 && n3 > n2){

    retorno = n3;

  }
  return retorno;
}

int num1, num2, num3;

int main (){

  printf("Digite 3 números sequencialmente(Solte apenas entre eles): ");
  scanf("%d %d %d", &num1, &num2, &num3);
  int maiorn = funcao(num1, num2, num3);
  system("cls");
  printf("O maior número que você digitou é %d.\n\n", maiorn);

  return 0;
}
