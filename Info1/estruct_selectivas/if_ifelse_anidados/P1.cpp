#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Ingrese un número y determine si es par.


int main (int argc, char *argv[]) {
	int n= 0;
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &n);
	
	if (n%2==0){
		printf ("El numero %d es par", n);
	}
	else{
		printf ("El numero %d es impar", n);
	}
	return 0;
}
