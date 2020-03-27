#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


typedef struct taxis
{
  //Datos del taxista
  char *titular;
  char *cuit;
  char *patente;
  char *marca_carro;
  char *modelo_carro;
  int year;
  char *maletero;
  //Puntero al nuevo taxista
  struct taxis *next;
} taxi_struct;
