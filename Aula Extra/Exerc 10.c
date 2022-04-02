#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char carros[10][20], busca[20], fusca[] = "fusca";
int temfusca = 0;
int j = 0;

int main () {

for(int i = 0; i <= 9; i++){

  printf("Digite o nome do carro: ");
  fgets(carros[i], 20, stdin);
  carros[i][strcspn(carros[i],"\n")]='\0';
  setbuf(stdin, NULL);

}while(temfusca != 1){
printf("Faça sua busca: ");
fgets(busca, 27, stdin);
busca[strcspn(busca,"\n")]='\0';
setbuf(stdin, NULL);
system("cls");

for(int i = 0; i <= 9; i++){
if(strcasecmp(busca, fusca)==0 ){

  temfusca++;
}
if(strcasecmp(carros[i], busca)==0){

 j++;

}
}
printf("\nTem %d desse carro\n\n", j);
}
}
