#include <stdio.h>
#include <stdlib.h>

int z;
int cont1;
int cont2;
int cont3;
int med[64];
float resultado = 0;
int i2 = 0;

int main (){

printf("Escreva um numero inteiro positivo: ");
scanf("%d", &z);

for(int i = z; i > 0; i--){printf("%d, ", i); if(i%4 == 0){cont1=++cont1;} if(i%3 == 0){cont2=++cont2;} if(i%5 == 0){med[i2] = i; cont3=++cont3; i2 = ++i2;}}
for(int i = cont3; i >= 0; i--){resultado=resultado+med[i];}
resultado=resultado/cont3;
printf("\n\n%d numeros sao multiplo de 4\n", cont1);
printf("\n%d numeros sao multiplo de 3\n", cont2);
printf("\nA media dos multiplo de 5 e %.2f\n\n", resultado);

}
