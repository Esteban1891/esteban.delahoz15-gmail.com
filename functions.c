#include "taxi.h"


void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("Titular%s\n", current->titular);
	printf("Modelo%s\n", current->modelo);
	printf("Patente%s\n", current->patente);
	printf("Marca Carro%s\n", current->marca_carro);
	printf("Modelo Carro %s\n", current->modelo_carro);
	printf("Year%d\n", current->year);
	printf("Maletero%s\n", current->maletero);
        current = current->next;
    }
}
