#include <stdio.h>
#include <stdlib.h>

int quant;
int total_seg;

int main (){

printf("Quantidade de individuo no universo: ");
scanf("%d", &quant);

for(int i = quant;i > 100; i = i/2)
{

total_seg++;

}

int min = total_seg/60;
int hora = total_seg/3600;

for(int j = min; j > 0; j--)
{

total_seg = total_seg - 60;

}

for(int k = min; k > 0; k--)
{

min = min - 60;

}

printf("Vai levar: %dH%dM%dS.", hora, min, total_seg);


return 0;
}
