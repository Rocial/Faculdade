#include <stdio.h>
#include <stdlib.h>

int vetora[10];
int vetorb[10];
int vetorc[10];

int main (){
for(int a = 0, b = 9; a <= 9 && b >= 0; a++, b--){printf("Digite os valores do vetor A: ");
scanf("%d", &vetora[a]);
vetorb[b] = vetora[a];
vetorc[a] = vetora[a] * 3;
}printf("\nValores do VetorA: ");
for(int a = 0; a <= 9; a++){
printf("%d ", vetora[a]);
}printf("\n\nValores do VetorB: ");
for(int a = 0; a <= 9; a++){
printf("%d ", vetorb[a]);
}printf("\n\nValores do VetorC: ");
for(int a = 0; a <= 9; a++){
vetorc[a]=vetorc[a] - vetorb[a];
printf("%d ", vetorc[a]);
}
printf("\n\n");
}
