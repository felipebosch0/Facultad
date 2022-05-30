#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
/* 	Para tributar un determinado impuesto se debe ser mayor de 25 años y 
	tener unos ingresos iguales o superiores a $200.000 mensuales.
	Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y 
	muestre por pantalla si el usuario tiene que tributar o no.*/
	int years= 0; float ingres= 0;
	printf ("Ingrese su edad: ");
	scanf ("%d", &years);
	printf ("Coloque sus ingresos mensuales: $");
	scanf ("%f", &ingres);
	
	if ((years>=25)&&(ingres>=200000)){
		printf ("Usted debe tributar");
	}
	else{
		printf ("Usted aun no debe tributar");
	}
	return 0;
}

