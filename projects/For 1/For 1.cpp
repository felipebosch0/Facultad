#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Realizar un programa que muestre la tabla de multiplicar del 1 al 10 de un numero. 	
//Ejemplo: Si ingreso 2 deberá aparecer en pantalla los valores 2, 4, 6, hasta el 20.
	int num=0,ii=0;
	printf ("Ingrese un numero del 1 al 10: ");
	scanf ("%d", &num);
	for (ii=0; ii<=(num*10); ii+=num){
		printf ("%d\n", ii);
	}
	return 0;
}

	
