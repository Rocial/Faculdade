#include <stdio.h>
#include <stdlib.h>

int borda;

int main(){

printf("Digite o tamanho do quadrado: ");
scanf("%d", &borda);
for(int i2 = borda; i2 >= 1; i2--){
  printf("\n");
for(int i = borda; i >= 1; i--){

if(i == 1 || i2 == 1){

printf("# ");

}else if(i == borda || i2 == borda){

printf("# ");

}else{

printf("   ");

}
}
}
printf("\n\n");
}
