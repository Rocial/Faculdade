/*@file: Exerc 4.c
*name: Fernando Rafael
*date: 26/07/2021
*brief: Exerc?cio da aula 10 sobre repeti??o usando for
*Onde deve-se fazer um algoritmo
*Que exiba todos os n?meros m?ltiplos de 2 entre 240 e 730
*/

//Bibliotecas para adicionar as fun??es
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//As vari?veis
int number;//Para imprimir os valores na tela e usar dentro da l?gica de repeti??o.

//Principal
int main(){

//Para a corre??o de alguns caracteres
setlocale(LC_ALL,"");

//Cria uma repeti??o onde, number enquanto number for menor ou igual a 730, deve incrementar mais um.
for(number = 240; number <= 730; number++){

//L?gica onde se o n?mero for divisivel a 2, o resto dever? ser = 0.
if(number%2 == 0){

//Se o resto for igual a 0, o cmd executar? essa bloco.
//Imprimi na tela o valor do ciclo atual de number na tela.
printf("%d\n", number);

}//Fim do if

}//Fim do for
return 0;
}//Fim do principal.
