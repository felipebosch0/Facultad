#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Escriba un programa que pida tres numeros y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos.


int main (int argc, char *argv[]) {
	// inicializamos variables
	float n1= 0, n2= 0,n3= 0;
	
	// input n1
	printf ("Ingrese tres numeros: \n");
	// asignamos n1
	scanf ("%f%f%f", &n1, &n2, &n3);
	
	// input n2
	printf ("Ingrese tres numeros: \n");
	// asignamos n2
	scanf ("%f%f%f", &n1, &n2, &n3);
	
	// input n3
	printf ("Ingrese tres numeros: \n");
	// asignamos n3
	scanf ("%f%f%f", &n1, &n2, &n3);
	
	// condicion
	if ((n1==n2)&&(n2==n3)){
		// mostramos
		printf ("Los tres numeros son iguales");
	}
	// si no se cumple la condicion
	else{
		// creamos una nueva condicion
		if ((n1!=n2)&&(n1!=n3)&&(n2!=n3)){
			// mostramos
			printf ("Los tres numeros son distintos");
		}
		// si no se cumple
		else{
			// mostramos
			printf ("Hay dos numeros iguales");
		}
	}
	return 0;
}