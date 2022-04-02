#include <stdio.h>
#include <stdlib.h>

float pesoideal(char sexo, float altura){

if(sexo == "m" || sexo == "M"){

return  (72.7 * altura) - 58;

}else{

return (62.1 * altura) - 44.7;

}
}

int main (){

char sexo;
float altura;

printf("Digite seu sexo(USE M OU F): ");
scanf("%c", &sexo);
printf("Agora digite sua altura: ");
scanf("%f", &altura);
system("cls");
printf("Seu peso ideal seria de %.2f Kg\n\n", pesoideal(sexo, altura));

return 0;
}
