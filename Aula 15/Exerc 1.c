#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "math.h"


int main (){

  typedef struct {
   float posX;
   float posY;
 }Ponto;//Struct ponto cartesiano

  Ponto ponto_1, ponto_2;

printf("Digite o valor X do ponto 1: ");
scanf("%f", &ponto_1.posX);

printf("Digite o valor Y do ponto 1: ");
scanf("%f", &ponto_1.posY);

printf("Digite o valor X do ponto 2: ");
scanf("%f", &ponto_2.posX);

printf("Digite o valor Y do ponto 2: ");
scanf("%f", &ponto_2.posY);

float dist = sqrt(pow((ponto_2.posX - ponto_1.posX), 2) + pow((ponto_2.posY - ponto_1.posY), 2));

printf("Distância entre os pontos: %.2f", dist);
}
