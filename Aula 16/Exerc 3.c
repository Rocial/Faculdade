#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float n[3];
float resultado;
char l[1];

int main (int argc, char **argv){

  setlocale(LC_ALL,"");

  for(int i = 1; i <= 3; i++){

    n[i] = atof(argv[i]);
  }

  strcpy(l, argv[4]);


  if (strcasecmp(l, "a") == 0){

    resultado = (n[1] + n[2] + n[3])/3;
    printf("Resultado: %.2f\n\n", resultado);

  }if (strcasecmp(l, "p") ==0){

    resultado = (n[1] * 5 + n[2] * 3 + n[3] * 2)/10;
    printf("Resultado: %.2f\n\n", resultado);

  }if (strcasecmp(l, "s")==0){

    resultado = n[1] + n[2] + n[3];
    printf("Resultado: %.2f\n\n", resultado);

  }else{printf("Por favor. Digite entre as opções A, P e S.");}

}
