#include <stdio.h>
#include <stdlib.h>

void AnalisedeN (int N)
{
int valor = 0;
for(int i = 1; i < N; i++)
{
if(N%i==0)
{
valor = valor + i;
}
}
if(valor==N)
{
printf("\n\nA soma dos divisores de N é igual a N.\n\n");
}else
{
printf("\n\nA soma dos divisores de N não é igual a N.\n\n");
}
}

void TodosNumeros ()
{
for(int j = 10000; j > 0; j--){
int valor = 0;
for(int i = 1; i < j; i++)
{
if(j%i==0)
{
valor = valor + i;
}
if(valor==j && i==(j-1))
{
printf(" %d", valor);
}
}
}
}

int main()
{
int N = 0;
int escolha;
while(N>=0){
printf("Escolha a opção desejada:\n\n1 - Para um numero especifico.\n2 - Para um numeros entre 1 e 10000.\nDigite qualquer valor para encerrar o programa\n\nDigite sua opção: ");
setbuf(stdin, NULL);
scanf("%d", &escolha);

switch(escolha)
{
case 1:

printf("Digite o valor de N: ");
scanf("%d", &N);
AnalisedeN(N);
break;

case 2:

printf("\n\nNúmeros entre 1 e 10000 que são a soma de seus divisores.\n\n");
TodosNumeros();
break;

default:

N = -1;
break;
}
}
return 0;
}
