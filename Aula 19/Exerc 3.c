#include <stdio.h>
#include <stdlib.h>

float vetor [3][3];

int main ()
{
printf("Matriz de enderecos");
for(int l = 0; l < 3; l++)
{
printf("\n\n");
for(int c = 0; c < 3; c++)
{
printf("%p ", &vetor[l][c]);
}
}
printf("\n\n");
return 0;
}
