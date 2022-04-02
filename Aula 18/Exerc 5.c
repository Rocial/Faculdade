#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int convertDECtoBIN (int dec, int cont, float n){

if(n < 2 && dec == 0){

printf("1");

}

if(dec==0 && cont > 0){
return 0;

}
if(dec%2==0){

printf("1");
  return convertDECtoBIN(dec/2, cont+1, n/2);
}else{

int n1 = n + 0.5;

  if(n1%2==0){

  printf("1");
  return convertDECtoBIN(dec/2, cont+1, n/2);

  }
printf("0");

 return convertDECtoBIN((dec/2), cont+1, n/2);

}

}

int main (){

setlocale(LC_ALL,"");

int decimal;

printf("Digite um número: ");
scanf("%d", &decimal);

printf("A versão em binário desse número é: ");
convertDECtoBIN(decimal, 0, decimal);

printf("\n\n");

return 0;
}
