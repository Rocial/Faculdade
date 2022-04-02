#include <stdio.h>
#include <stdlib.h>

int vetor[10];
int escolha;
int cont = 0;

int main (){

for(int a = 0; a <= 9; a++){printf("Digite os valores do vetor: ");scanf("%d", &vetor[a]);if(a == 9){system("cls");}
}while(escolha >= 0){
cont = 0;
printf("Escolha um valor: ");
scanf("%d", &escolha);
system("cls");
if(escolha >= 0){
for(int i = 0; i <= 9; i++){
if(vetor[i] == escolha){
cont = ++cont;
printf("Esse numero existe no vetor.\n");
}if(cont == 0 && i == 9){
printf("Esse numero nao existe no vetor.\n");
}
}
}
}
}
