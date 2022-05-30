#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Desarrollar un programa que permita la carga de 5 valores por teclado y 
//nos muestre posteriormente la suma de los valores ingresados y su promedio.
	float num= 0, sum= 0;int ii= 0;
	
	for (ii=0; ii<5; ii++){
		printf ("Ingrese un numero: ");
		scanf ("%f", &num);
		sum+=num;
	}
	printf ("La suma es: %f\n", sum);
	printf ("El promedio es: %f", (sum/ii));
	return 0;
}

