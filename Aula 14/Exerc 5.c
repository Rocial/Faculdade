#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int numero;

int fatorial (int num){

  for(int i = (num - 1); i > 0; i--){

    int resultado;

    num = num * i;

  }
return num;
}

int main (){

  setlocale(LC_ALL,"");

  printf("Digite o n�mero a ser fatorado: ");
  scanf("%d", &numero);
system("cls");
  printf("O fatorial desse n�mero � %d\n\n", fatorial(numero));

}
