#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci (int n, int n1, int n2, int vzs){

if(vzs == 0){

n2 = n1;
n1 = n;
n = n1 + n2;
return n;

}
if(n ==  0 && vzs > 2){

n = 1;

return fibonacci(n, n1, n2, vzs - 3);

}else{
if(vzs == 2 && n == 0){

return 1;

}
n2 = n1;
n1 = n;
n = n1 + n2;

return fibonacci(n, n1, n2, vzs - 1);

}
}

int main () {

  setlocale(LC_ALL,"");

int posicao;

printf("Digite a posição da sequência que deseja: ");
scanf("%d", &posicao);

printf("O número na posicao é o %d.", fibonacci(0, 0, 0, posicao));

return 0;
}
