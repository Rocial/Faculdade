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

printf("Digite um n�mero: ");
scanf("%d", &decimal);

printf("A vers�o em bin�rio desse n�mero �: ");
convertDECtoBIN(decimal);

printf("\n\n");

return 0;
}
