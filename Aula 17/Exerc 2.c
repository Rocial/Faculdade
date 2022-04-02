#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int hora, min, seg;
}Horario;

void converteHora (int total_segundos, Horario* hor){
(*hor).hora = total_segundos/3600;
(*hor).min = total_segundos/60;
(*hor).seg = total_segundos;

for(int i = (*hor).min; i > 0; i--){

(*hor).seg = (*hor).seg - 60;

}

for(int j = (*hor).hora; j > 0; j--){

(*hor).min = (*hor).min - 60;

}
return;
}

int main (){

int segundos;
Horario hor;

printf("Escreve quanto tempo em segundos se passou: ");
scanf("%d", &segundos);

converteHora(segundos, &hor);

system("cls");

printf("Passaram exatamente %d:%d:%d\n\n", hor.hora, hor.min, hor.seg);

return 0;
}
