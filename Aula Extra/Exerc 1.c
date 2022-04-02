#include <stdio.h>
#include <stdlib.h>

float tabelinha[20];
float valor = 2.54;

int main (){

for(int i = 1; i <= 20; i++){

tabelinha[i] = valor;
valor = valor + 2.54;
printf("%d\" equivale a %.2f cm\n", i, tabelinha[i]);

}
printf("\n");
}
