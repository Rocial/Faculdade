#include <stdio.h>
#include <stdlib.h>

int func(int n){
  if(n == 1){
    return 0;
  }else if(n == 2){
    return 1;
  }else{
    printf("%d, ", func(n-1) + func(n-2));
  }
}

int main(){
  int n;
  printf("Digite um numero 'n', para se calcular ele na sequencia de Finonacci: ");
  scanf("%d", &n);
  printf("Numeros: ");
  func(n);

  return 0;
}
