#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float num= 0; int diez= 0;
	printf ("Ingrese un numero o 0 para salir: ");
	scanf ("%f", &num);
	
	while (num!=0){
		if (num == 10){
			diez++;
		}
			printf ("Ingrese un numero o 0 para salir: ");
			scanf ("%f", &num);
	}
	printf ("Se ingreso %d veces el numero 10", diez);
	return 0;
}
