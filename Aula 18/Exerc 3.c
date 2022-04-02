#include <stdio.h>
#include <stdlib.h>

int elevacaoMltp(int x, int y){

if(y == 1){

return x;

}else{

return x * elevacaoMltp(x, y-1);

}

}

int main (){

int x, y;

printf("Digite o valor de x: ");
scanf("%d", &x);
printf("Agora digite o valor de y: ");
scanf("%d", &y);

system("cls");

printf("O resultado da elevacao de x po y e: %d\n\n", elevacaoMltp(x, y));

}
