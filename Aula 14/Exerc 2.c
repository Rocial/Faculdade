#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char sexo[12];
float altura;
float pesoideal;

float pesoidealfemi(float n){
  return (62.1 * n) - 44.7;
}

float pesoidealmasc(float n){
  return (72.7 * n) - 58;
}

int main (){

  setlocale(LC_ALL,"");

  printf("Digite sua altura: ");
  scanf("%f", &altura);
  setbuf(stdin, NULL);

  printf("Agora digite o seu sexo: ");
  fgets(sexo, 12, stdin);
  sexo[strcspn(sexo, "\n")] ='\0';
  setbuf(stdin, NULL);

  if(strcasecmp(sexo, "masculino") == 0){

    pesoideal = pesoidealmasc(altura);
    printf("Seu peso ideal seria de: %.2f Kg\n\n", pesoideal);

  }else if(strcasecmp(sexo, "feminino") ==0){

    pesoideal = pesoidealfemi(altura);
    printf("Seu peso ideal seria de: %.2f Kg\n\n", pesoideal);

  }else{printf("\nPor favor, escolha entre masculino ou feminino\n\n");}
}
