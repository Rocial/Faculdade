#include <stdio.h>
#include <stdlib.h>

int var1, var2;

int main ()
{

var1 = 10;
var2 = 20;

if(&var1 > &var2)
{
printf("Var1 com endereco %p e o maior endereço e possui %d como conteudo.\n\n", &var1, var1);

}else
{

printf("Var2 com endereco %p e o maior endereço e possui %d como conteudo.\n\n", &var2, var2);

}
}
