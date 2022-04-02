#include <stdio.h>
#include <stdlib.h>

int funcao (int N)
{
if(N <= 0)
{
return NULL;
}
return N;
}

int main ()
{
int N;
printf("Digite o valor de N: ");
scanf("%d", &N);
int *vetor = (int*) calloc(funcao(N),funcao(N));
int j = funcao(N);
for(int i = 0; i <= j; i++)
{
if(i == 0){
vetor[i] = 0;
}else{vetor[i] = 1 + vetor[i - 1];}
printf("%ld ", vetor[i]);
}
free(vetor);
printf("\n\n");
return 0;
}
