#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Escribir un programa que solicite el ingreso de la temperatura en grados, 
// si la temperatura está por encima de 100 grados desplegar el mensaje “arriba del punto de ebullición del agua”,
// de lo contrario desplegar el mensaje “abajo del punto de ebullición del agua”.

int main (int argc, char *argv[]) {
	// inicializacion de variables
	float temp=0;

	//	input de temperatura por teclado
	printf ("Ingrese la temperatura en grados celsius: ");
	// asigno lo ingresado a una varibale
	scanf ("%f", &temp);
	
	// si temp es mayor igual a 100°
	if (temp>=100){
		printf ("El objeto esta a %f°Y esta por arriba del punto de ebullicion del agua",temp);
	}
	// si temp es menor a 100°
	else{
		printf ("El objeto esta a %f°Y esta por debajo del punto de ebullicion del agua",temp);
	}
	return 0;
}

