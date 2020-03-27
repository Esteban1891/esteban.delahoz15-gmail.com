#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

taxi_struct *agregar_taxi(taxi_struct **head, char *titular, char *cuit, char *patente, char *marca_carro, char *modelo_carro, int year, char *maletero)
{
	taxi_struct *newTaxi;
	taxi_struct *tmp;

	if (*head == NULL)
	{
		return (NULL);
	}

	newTaxi = malloc(sizeof(taxi_struct));
	if (newTaxi == NULL)
	{
		free(newTaxi);
		return (NULL);
	}

	newTaxi->titular = titular;
	newTaxi->cuit = cuit;
	newTaxi->patente = patente;
	newTaxi->marca_carro = marca_carro;
	newTaxi->modelo_carro = modelo_carro;
	newTaxi->year = year;
	newTaxi->maletero = maletero;
	newTaxi->next == NULL;

	if (tmp == NULL)
	{
		*head = newTaxi;
	}

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newTaxi;
	}

	return (newTaxi);
}



int main(void)
{
	char titular[30];
	char cuit[30];
	char patente[30];
	char marca_carro[30];
	char modelo_carro[30];
	int year;
	char maletero[30];

	taxi_struct *head;
	head = NULL;

	puts("======= Sistema de registro de taxis =======");

	puts("Type the name of the cab");
	fgets(titular, sizeof(titular), stdin);
	puts("Type the CUIT of the cab");
	fgets(cuit, sizeof(cuit), stdin);
	puts("Type the plates of the cab");
	fgets(patente, sizeof(patente), stdin);
	puts("Type the car brand of the cab");
	fgets(marca_carro, sizeof(marca_carro), stdin);
	puts("Type the model f the cab car");
	fgets(modelo_carro, sizeof(modelo_carro), stdin);
	puts("Type the year of the cab car");
	scanf("%d", &year);
	puts("Especify if the car has a car trunk Yes / No");
	scanf("%s", maletero);

	agregar_taxi(&head, titular, cuit, patente, marca_carro, modelo_carro, year, maletero);
	return (0);
}
