#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void convertDECtoBIN (int dec){
int n;
if(dec/2!=0){

n = dec/2;
convertDECtoBIN(n);
printf("%d", dec%2);

}else{

printf("%d", dec%2);

}

}

int main (){

setlocale(LC_ALL,"");

int decimal;

printf("Digite um número: ");
scanf("%d", &decimal);

printf("A versão em binário desse número é: ");
convertDECtoBIN(decimal);

printf("\n\n");

return 0;
}
