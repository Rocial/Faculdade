#include <stdio.h>
#include <stdlib.h>

int main ()
{

  void *ptr = 0x5DC;//1500
  printf("Endereço armazenado em ptr: %p\n", ptr);//1500
  ptr++;
  printf("Endereço armazenado em ptr: %p\n", ptr);//1501
  ptr = ptr + 15;
  printf("Endereço armazenado em ptr: %p\n", ptr);//1516
  ptr = ptr - 2;
  printf("Endereço armazenado em ptr: %p\n", ptr);//1514


}
