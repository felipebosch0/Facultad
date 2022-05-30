#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Ingrese el monto de una cuota y el día de pago. 
// Si el día de pago es menor o igual a 10 no se cobra recargo. 
// De lo contrario si la cuota es mayor a $5000 se cobra el 10% de recargo,
// sino se cobra el 5%. Debe mostrar en todos los casos el recargo y el valor final de la cuota.



int main (int argc, char *argv[]) {
	// inicializacion de variables
	float cuota= 0; int dia= 0;

	// input por teclado del monto
	printf ("Ingrese el monto de la cuota:");
	// asignamos lo ingresado
	scanf ("%f", &cuota);

	// input por teclado dia de pago
	printf ("Ingrese el dia de pago:");
	// asignamos lo ingresado
	scanf ("%d", &dia);
	
	// condicion
	if (dia<=10){
		// mostramos
		printf ("Recargo: $0 \nValor final de la cuota: $%f", cuota);
	}
	// si no se cumple la condicion
	else{
		// nueva condicion
		if (cuota>5000){
			// mostramos
			printf ("Recargo: $%f \nValor final de la cuota: $%f", cuota * 0.1, cuota * 1.1);
		}
		// si no se cumple la nueva condicion
		else{
			// mostramos
			printf ("Recargo: $%f \nValor final de la cuota: $%f", cuota * 0.05, cuota * 1.05);
		}
	}
	return 0;
}

