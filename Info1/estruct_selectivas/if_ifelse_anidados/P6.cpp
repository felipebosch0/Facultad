#include<stdio.h>
using namespace std;

// ENUNCIADO

// Ingrese los lados de un triángulo y determine de qué triangulo se trata.
// Si tiene todos los lados diferentes es escaleno,
//todos los lados iguales es equilátero y si tiene dos lados iguales y uno desigual es isósceles.

int main (int argc, char *argv[]) {
	// inicializacion de variables
	float lad1= 0, lad2= 0, lad3= 0;

	// input primer lado del triangulo
	printf ("Ingrese los lados del triangulo:\n");
	// asignamos lo ingresado a una variable 
	scanf ("%f", &lad1);

	// input segundo lado del triangulo
	printf ("Ingrese los lados del triangulo:\n");
	// asignamos lo ingresado a una variable
	scanf ("%f", &lad2);

	// input tercer lado del triangulo
	printf ("Ingrese los lados del triangulo:\n");
	// asignamos lo ingresado a una variable
	scanf ("%f", &lad3);
	
	// si lad1 lad2 y lad3 son iguales
	if ((lad1==lad2)&&(lad1==lad3)&&(lad2==lad3)){
		printf ("Triangulo equilatero");
	}
	// si no lo son
	else{
		// si los 3 son distintos
		if ((lad1!=lad2)&&(lad1!=lad3)&&(lad2!=lad3)){
			printf ("Triangulo escaleno");
		}
		// si no se cumple ninguno de esos casos
		else{
			printf ("Trinagulo isosceles");
		}
	}
	return 0;
}

