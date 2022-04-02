#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int par = 0;
int maior = 0;
int impar = 0;
int media;
int matriz[4][3];
int linha2;

int main (){

for(int l = 0; l <= 3; l++){
for(int c = 0; c <= 2; c++)
{
printf("digite o valor na linha e coluna da matriz [%d][%d]: ", l, c);
scanf("%d", &matriz[l][c]);
}
}
for(int l = 0; l <= 3; l++)
{
for(int c = 0; c <= 2; c++)
{
if(matriz[l][c]%2 == 0 && matriz[l][c] >= 0){
par = matriz[l][c] + par;
}media = matriz[l][c] + media;
if(matriz[l][c]%2 != 0){
impar = ++impar;
}if(l == 1){
linha2 = matriz[l][c] + linha2;
}if(c == 2 && matriz[l][c] >= maior){
maior = matriz[l][c];
}
}
}
system("cls");
media = media/12;
printf("\n\nMatriz:\n");
for(int l = 0; l <= 3; l++)
{
  printf("\n");
  for(int c = 0; c <= 2; c++)
  {
    printf("%d ", matriz[l][c]);

  }
}

printf("\nA soma dos numeros pares: %d\n", par);
printf("\nA media de todos os elementos: %d\n", media);
printf("\nA quantidade de todos os elementos impares da matriz: %d\n", impar);
printf("\nA soma dos elementos da segunda linha da matriz: %d\n", linha2);
printf("\nO maior elemento da terceira coluna da matriz: %d\n\n", maior);
}
