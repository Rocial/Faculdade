#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char produtos[3][20];
float preco[3][3];

int main (){

  for (int a = 0; a < 3; a++)
  {

    printf("Digite o nome do produto: ");
    fgets(produtos[a], 20, stdin);
    produtos[a][strcspn(produtos[a],"\n")]='\0';
    setbuf(stdin, NULL);
    printf("Digite o preco: ");
    scanf("%f", &preco[a][0]);
    setbuf(stdin, NULL);
    preco[a][1] = (preco[a][0] * 0.10) + preco[a][0];
    preco[a][2] = (preco[a][0] * 0.20) + preco[a][0];
  }system("cls");
  printf("Produto                  |Preco(R$)\n\n");
  for(int a = 0, n = 1; a < 3; a++, n++){

    printf("%d - %-20s |", n, produtos[a]);
    printf("%.2f - %.2f - %.2f\n", preco[a][0], preco[a][1], preco[a][2]);

  }
}
