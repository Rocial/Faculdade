#include <stdio.h>
#include <stdlib.h>


float SomaS (float* n, int cont)
{

  if(cont == (*n))
  {
    (*n)--;
  }
if(cont <= 0)
{
 return 0;
}
return ((1 + (*n) * (*n))/(*n)) + SomaS(&n, --cont);

}

int main ()
{

int n = 0;

while(1){

if(n >= 0){
printf("Digite o número de n: ");
scanf("%f", &n);
}else{
printf("Por favor, apenas valores acima de 0. Digite o número de n: ");
scanf("%f", &n);
}
if(n > 0)
{

break;

}
}
printf("O valor da soma da série, para n valores: %.2f.", SomaS(&n, n));
return 0;
}
