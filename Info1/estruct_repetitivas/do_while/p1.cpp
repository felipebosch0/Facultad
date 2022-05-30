#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	//1. Realizar un algoritmo que solicite las edades de las personas, y luego obtenga la edad promedio. 
	//La cantidad de personas que se registran se desconoce.
	int edad= 0, sum= 0, counter= 0;
	do{
		printf ("Ingrese su edad o 0 para calcular la edad promedio: ");
		scanf ("%d", &edad);
		sum+=edad;
		counter++;
	} while(edad!=0);
	printf ("Edad promedio: %d", sum/counter);
	return 0;
}

