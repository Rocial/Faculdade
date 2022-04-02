#include <stdio.h>
#include <stdlib.h>

int calculoFatorial(int fatorial){

if(fatorial == 1){

return 1;

}else{

return fatorial * calculoFatorial(fatorial - 1);

}

}

int main (){

int fatorial;

printf("Digite o valor a ser fatorado: ");
scanf("%d", &fatorial);

printf("\n%d\n\n", calculoFatorial(fatorial));

}
