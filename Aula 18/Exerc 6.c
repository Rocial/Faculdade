#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int funcaox (int a){

if(a <= 0){

return 0;

}else{

for(int i = a - 1; i > 0; i--){

a = a + i;

}
}
return a;

}

int main (){

  int a;

  setlocale(LC_ALL,"");

printf("Digite um n�mero: ");
scanf("%d", &a);

printf("A soma sequ�ncial dele at� o 0 � de: %d\n\n", funcaox(a));

}
