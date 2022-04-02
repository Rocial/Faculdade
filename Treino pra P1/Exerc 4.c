#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resultado = 0;
float n;
float result = 0;

void funcao(float* n){

for(int i = (*n) - 1; i > 0; i--){


resultado = result + (pow((*n), 2) + 1)/((*n) + 3);
result = resultado;
printf("\n%f\n", result);
(*n) = --(*n);

}
printf("%.2f.\n\n", resultado);
}

int main ()
{

float n;

printf("Digite quantas somas vc quer fazer nesta série: ");
scanf("%f", &n);
printf("\nA soma vai resultar em: ");
funcao(&n);

return 0;
}
