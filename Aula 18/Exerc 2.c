#include <stdio.h>
#include <stdlib.h>

int multiplicacaoSoma(int x, int y){

if(y == 1){

return x;

}else{

return x + multiplicacaoSoma(x, y-1);

}

}

int main (){

int x, y;

printf("Digite o valor de x: ");
scanf("%d", &x);
printf("Agora digite o valor de y: ");
scanf("%d", &y);

system("cls");

printf("O resultado da multiplicacao entre ambos e: %d\n\n", multiplicacaoSoma(x, y));

}
