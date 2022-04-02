#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int num1;
int num2;
int num3;


void funcao (){

if(num1 >= 0 && num2 >= 0 && num3 >= 0){
  if(num1 > num2){
    if(num1 > num3){
      printf("Número mais alto: %d", num1);
    }else
    {
      printf("Número mais alto: %d", num3);
    }
  } else if(num2 > num3){
    printf("Número mais alto: %d", num2);
  } else
  {
    printf("Número mais alto: %d", num3);
  }}else{printf("\n-1\n\n");}

  return;
}

int main () {

  setlocale(LC_ALL,"");

  printf("Digite um número inteiro: ");
  scanf("%d", &num1);
  printf("Digite um número inteiro: ");
  scanf("%d", &num2);
  printf("Digite um número inteiro: ");
  scanf("%d", &num3);

  funcao();
  printf("\n\n");

  return 0;
}
