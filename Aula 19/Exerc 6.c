#include <stdio.h>
#include <stdlib.h>

int a;
int *b = &a;
int **c = &b;
int ***d = &c;

int main ()
{

printf("Digite o valor de a: ");
scanf("%d", &a);
system("cls");
printf("O dobro do valor de a, utilizando b: %d\n\n", *b * 2);
printf("O triplo do valor de a, utilizando c: %d\n\n", **c * 3);
printf("O quadruplo do valor de a, utilizando d: %d\n\n", ***d * 4);

return 0;

}
