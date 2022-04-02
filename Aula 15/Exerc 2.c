#include "stdio.h"
#include "stdlib.h"

  typedef struct {
   int hora;
   int minutos;
   int segundos;
  }Horario;
   typedef struct {
   int day;
   int mouth;
   int year;
  }Data;
  typedef struct {
    char local[50];
    char texto[100];
    Horario hora;
  }Compromisso;
