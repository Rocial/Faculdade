#include <stdio.h>
#include <stdlib.h>

float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main ()
{
  printf("Endereco de cada posicao do vetor\n\n");
for(int i = 0; i < 10; i++)
{

printf("%p\n", &vetor[i]);

}
printf("\n\n");
return 0;
}
