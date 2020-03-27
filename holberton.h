#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct taxis
{
	char *titular;
	char *cuit;
	char *patente;
	char *marca_carro;
	char *modelo_carro;
	int year;
	char *maletero;
	struct taxis *next;
} taxi_struct;

taxi_struct *agregar_taxi(taxi_struct **head, char *titular, char *cuit, char *patente, char *marca_carro, char *modelo_carro, int year, char *maletero)

#endif
