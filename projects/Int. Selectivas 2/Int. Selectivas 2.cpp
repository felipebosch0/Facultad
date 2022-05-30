#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*2. Una expendedora de alfajores de chocolate tiene 3 tipos: simple, doble y triple capa de dulce de leche, 
	las cuales tienen un costo de $10.00, $20.00 y $30.00 respectivamente. 
	La máquina permite realizar el pago total de la compra en “efectivo”, “débito” o “tarjeta”. Para cada caso:
	
	- Si el cliente paga en efectivo, el programa deberá calcular el vuelto en caso de no pagar justo.
	- Si el cliente paga con débito, tiene un descuento del 2% del total de la compra
	- Si el cliente paga con tarjeta de crédito, tiene un recargo del 2% del total de la compra.
	
	Realice un algoritmo que permita solicitar el tipo de alfajor, el modo de pago y calcule el monto a abonar por el cliente. */
	int alfajor= 0, pago= 0, total= 0;
	float total1= 0,  costo= 0;
	printf ("1)Simple\n2)Doble\n3)triple\n\n¿Que alfajor desea?: ");
	scanf ("%d", &alfajor);
	
	switch (alfajor){
	case 1:
		costo=10;
		break;
	case 2:
		costo=20;
		break;
	case 3:
		costo=30;
		break;
	}
	printf ("\n1)Efectivo\n2)Debito(2 descuento)\n3)Credito(2 recargo)\n\n¿Como desea abonar?: ");
	scanf ("%d", &pago);
	
	switch (pago){
	case 1:
		printf ("Ingrese el dinero con el que va a abonar: ");
		scanf ("%d", &total);
		printf ("vuelto: %f", total-costo);
		break;
	case 2:
		total1= costo-(costo*0.2);
		printf ("El total es: %f", total1);
		break;
	case 3:
		total1= costo*1.02;
		printf ("El total es: %f", total1);
		break;
	}
	return 0;
}

