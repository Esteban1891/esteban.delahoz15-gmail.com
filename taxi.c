#include <taxi.h>
#include <stdio.h>
#include <stdlib.h>



int taxi()
{
	char *titular;
	char *cuit;
	char *patente;
	char *marca_carro;
	char *modelo_carro;
	int year;
	char *maletero;
	int opc;

	printf("Enter an Option:\n");

	printf("1. Show Taxi list\n");
	printf("2. Add Taxi\n");
	printf("3. Modify status\n");
	printf("4. Request a Taxi at This Location\n");
	printf("5. Exit");
	printf("-> ");
	scanf("%d", &opc);

	switch (opc)
	{
	case 1:
		print_list();
		char *titular

		printf("titular", titular);
		printf("Cuit", cuit);
		printf("Patente", patente);
		printf("Marca Carro", marca_carro);
		printf("Modelo Carro", modelocarro);
		printf("Year", year);
		printf("Maletero", maletero);
		break;

	case 2:
		printf("Taxi Restantes");
		break;

	case 3:
		printf("Taxi Restantes");
		break;
	case 4:
		printf("Taxi Restantes");
		break;

	case 5:
		printf("Thanks!!");
		break;

	default:
		printf("Error! operator is not correct");
	}
	return (0);
}
