#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Dise�ar y codificar un programa que permita tomar por teclado un n�mero entero. 
Este n�mero representa un mes del a�o, siendo 1 para enero y 12 para diciembre. 
El programa debe imprimir por pantalla la cantidad de d�as del mes seleccionado. (Se supone un a�o no bisiesto)*/
	int num=0;
	printf ("Ingrese unnumero del 1 al 12: ");
	scanf ("%d", &num);
	
	switch (num){
	case 1:
		printf ("Enero tiene 31 dias");
		break;
	case 2:
		printf ("Febrero tiene 28 dias");
		break;
	case 3:
		printf ("Marzo tiene 31 dias");
		break;
	case 4:
		printf ("Abril tiene 30 dias");
		break;
	case 5:
		printf ("Mayo tiene 31 dias");
		break;
	case 6:
		printf ("Junio tiene 30 dias");
		break;
	case 7:
		printf ("Julio tiene 31 dias");
		break;
	case 8:
		printf ("Agosto tiene 30 dias");
		break;
	case 9:
		printf ("Septiembre tiene 31 dias");
		break;
	case 10:
		printf ("Octubre tiene 30 dias");
		break;
	case 11:
		printf ("Noviembre tiene 31 dias");
		break;
	case 12:
		printf ("Diciembre tiene 30 dias");
		break;
	}
	return 0;
}

