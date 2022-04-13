#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Para tributar un determinado impuesto se debe ser mayor de 25 años y 
//	tener unos ingresos iguales o superiores a $200.000 mensuales.
//	Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y 
//	muestre por pantalla si el usuario tiene que tributar o no.

int main (int argc, char *argv[]) {

	// inicializamos variables
	int yrs= 0; float inp= 0;
	
	// input edad
	printf ("Ingrese su edad: ");
	// asignamos yrs
	scanf ("%d", &yrs);

	// input ingresos
	printf ("Coloque sus ingresos mensuales: $");
	// asignamos inp
	scanf ("%f", &inp);
	
	// condicion
	if ((yrs>=25)&&(inp>=200000)){
		// mostramos
		printf ("Usted debe tributar");
	}
	// si no se cumple
	else{
		// mostramos
		printf ("Usted aun no debe tributar");
	}
	return 0;
}

