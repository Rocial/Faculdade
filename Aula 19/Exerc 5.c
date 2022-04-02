#include <stdio.h>
#include <stdlib.h>

void Comparacao (int *vetor1, int *vetor2)
{
int cont = 0;
for(int i = 0; i < 3;  i++)
{

if(vetor1[i]==vetor2[i]){
printf("seila");
cont++;

}
}
system("cls");
if(cont == 3)
{

printf("A segunda string esta dentro da primeira string!\n\n");

}else{

printf("A segunda string nao esta dentro da primeira string!\n\n");

}
}

int main ()
{

int vetor1[3], vetor2[3];


for(int i = 0; i < 3; i++)
{

printf("Digite o valor na linha[%d] do vetor 1: ", i+1);
scanf("%d", &vetor1[i]);
printf("Digite o valor na linha[%d] do vetor 2: ", i+1);
scanf("%d", &vetor2[i]);

}

Comparacao(vetor1, vetor2);
return 0;
}
