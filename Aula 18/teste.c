#include <stdio.h>
#include <stdlib.h>

void incrementa(int* valor){
 printf("Valor recebido %d\n", *valor);
 (*valor)++;
 printf("Valor incrementado %d\n", *valor);
 return;
}//incrementa
int main(){
 int valor = 15;
 incrementa(&valor);
 printf("Valor ap�s a fun��o: %d\n", valor);
 return 0;
}//main
