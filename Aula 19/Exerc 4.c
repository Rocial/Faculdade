#include <stdio.h>
#include <stdlib.h>

int vetor[5];
int *ponteiro;

int main ()
{
ponteiro = vetor;
for(int l = 0; l < 5; l++){

  printf("Digite o valor na linha[%d]: ", l+1);
  scanf("%d", &ponteiro[l]);
}
printf("\n\n");
printf("Vetor multiplicado por 2: ");
for(int l = 0; l < 5; l++)
{
printf("%d ", ponteiro[l] * 2);
}
printf("\n\n");
printf("Endereco dos valores pares: ");
for(int l = 0; l < 5; l++)
{
  if(vetor[l]%2==0){
printf("%p ", &ponteiro[l]);
}
}
printf("\n\n");
return 0;
}
