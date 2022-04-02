#include <stdio.h>
#include <stdlib.h>

int altura;
int cont = 0;

int Triangulo_Lateral (int n)
{

for(int j = n + n -1; j > 0; j--)
{

int auxcont = 0;

if(cont == n){

auxcont = j;

}else{

cont = ++cont;
auxcont = cont;

}

while(auxcont > 0)
{

printf("*");
auxcont--;

}
printf("\n\n");
}


return 0;
}

int main ()
{

printf("Digite a altura do triangulo: ");
scanf("%d", &altura);

Triangulo_Lateral(altura);

return 0;
}
