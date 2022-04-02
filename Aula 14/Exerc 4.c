#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int notame;

void fun (int nota){

  if(10 >= nota && nota >= 9){

    printf("\nO conceito dessa nota é A\n\n");

  }if(8 >= nota && nota >= 7){

    printf("\nO conceito dessa nota é B\n\n");

  }if(6 >= nota && nota >= 5){

    printf("\nO conceito dessa nota é C\n\n");

  }if(4 >= nota && nota >= 0){

    printf("\nO conceito dessa nota é D\n\n");

  }else{

    printf("\nEssa nota não se enquadra a nenhuma conceito.\n\n");

  }return;
}

int main (){

  printf("Digite a nota média final do aluno: ");
  scanf("%d", &notame);


  fun(notame);
  return 0;
}
