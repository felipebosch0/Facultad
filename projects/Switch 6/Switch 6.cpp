#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*El banco de la ciudad ha decidido aumentar el l�mite de cr�dito de las tarjetas de cr�dito de sus clientes, 
	para esto considera que si su cliente tiene tarjeta tipo 1, el aumento ser� de 25 %; 
	si tiene tipo 2, ser� de 35 %; si tiene tipo 3, de 40 %, y para cualquier otro tipo, de 50 %. 
	Realice un algoritmo para determinar el nuevo l�mite de cr�dito que tendr� una persona en su tarjeta, 
	para ello deber� solicitar el tipo de tarjeta y el monto actual de su tarjeta.*/
	int tipo= 0;
	float monto= 0;
	printf ("1)visa\n2)naranja\n3)mastercard\n4)otra\nSeleccione su tipo de tarjeta: ");
	scanf ("%d", &tipo);
	printf ("Ingrese el monto actual de su tarjeta: ");
	scanf ("%f", &monto);
	
	switch (tipo){
	case 1:
		printf ("Su nuevo limite de credito sera:  $%f", monto*1.25);
		break;
	case 2:
		printf ("Su nuevo limite de credito sera:  $%f", monto*1.35);
		break;
	case 3:
		printf ("Su nuevo limite de credito sera:  $%f", monto*1.40);
		break;
	default:
		printf ("Su nuevo limite de credito sera:  $%f", monto*1.50);
		break;
	}
	return 0;
}

