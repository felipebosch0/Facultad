#include <stdio.h> 

// ENUNCIADO:
// Un teatro desea crear un sistema de compra de entradas automÃ¡tico.
// El sistema solicita al espectador cuantas entradas desea y luego muestra el monto a pagar.
// Tener en cuenta que cada entrada cuesta $200.

int main(int argc, char *argv[]) {
	//Inicializamos variables y aplicamos type
	int entradas = 0 , p_entrada = 200, tp = 0;
	// usuario ingresa la cantidad de entradas deseadas
	printf("Ingrese la cantidad de entradas que desea comprar:");
	// Asignamos la cantidad de entradas a una variable
	scanf("%d", &entradas);
	// Calculamos la multiplicacion de entradas * p_entradas.
    // Asignamos el resultado en la variable tp
	tp= entradas*p_entrada;
	// mostramos por pantalla el resultado del algoritmo
	printf("El total a pagar por %d entradas es: $%d", entradas, tp);
	return 0;
}
