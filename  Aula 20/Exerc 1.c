#include <stdio.h>
#include <stdlib.h>

int main ()
{

int tamanho;

printf("Digite o tamanho do vetor: ");
scanf("%d", &tamanho);

int *vetor;

vetor = (int*) calloc(tamanho, sizeof(tamanho));

for(int i = 0; i < tamanho; i++)
{

printf("%ld ", vetor[i]);

}
printf("\n\n");
free(vetor);
return 0;
}
