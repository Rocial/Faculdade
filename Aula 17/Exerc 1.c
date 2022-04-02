#include <stdio.h>
#include <stdlib.h>

int converteHora (int* hora, int* min, int* seg){
/*(*min) = total_segundos/60;
(*hora) = total_segundos/3600;
(*seg) = total_segundos;
*/
for(int j = (*min); j > 0; j--){

(*seg) = (*seg) - 60;

}

for(int i = (*hora); i > 0; i--){

(*min) = (*min) - 60;

}
return 0;
}

int main (){

int segundos, hora, min, seg;

printf("Escreve quanto tempo em segundos se passou: ");
scanf("%d", &segundos);

converteHora(&hora, &min, &seg);

system("cls");

printf("Passaram exatamente %d:%d:%d\n\n", hora, min, seg);

return 0;
}
