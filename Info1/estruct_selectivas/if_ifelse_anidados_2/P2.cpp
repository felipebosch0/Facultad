#include<stdio.h>
using namespace std;
// ENUNCIADO:
// Escriba un programa que pida dos numeros y que conteste cual es el menor y cual el mayor 
// o que escriba que son iguales.

int main (int argc, char *argv[]) {
	// inicializamos variables
	float n1= 0, n2= 0;

	// input numeros
	printf ("Ingrese 2 numeros:");
	// asignamos los numeros a una variable
	scanf ("%f%f", &n1, &n2);
	
	// condicion
	if (n1>n2){
		// mostramos
		printf ("%f es mayor que %f", n1, n2);
	}
	// si no se cumple la condicion
	else{
		// creamos una nueva condicion
		if (n1<n2){
			// mostramos
			printf ("%f es menor que %f", n1, n2);
		}
		// si no se cumple la nueva condicion
		else{
			// mostramos
			printf ("Son numeros iguales");
		}
	}
	return 0;
}

