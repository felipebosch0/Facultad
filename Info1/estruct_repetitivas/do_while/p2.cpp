#include <iostream>
using namespace std;
/*Una expendedora de alfajores de chocolate tiene 3 tipos: simple, doble y triple capa de dulce de leche, las cuales tienen un costo de $10.00, $20.00 y $30.00 respectivamente. La máquina permite realizar el pago total de la compra en “efectivo”, “débito” o “tarjeta”. Para cada caso:
	- Si el cliente paga en efectivo, el programa deberá calcular el vuelto en caso de no pagar justo.
	- Si el cliente paga con débito, tiene un descuento del 2% del total de la compra
	- Si el cliente paga con tarjeta de crédito, tiene un recargo del 2% del total de la compra.
	Realice un algoritmo que permita solicitar el tipo de alfajor, el modo de pago y calcule el monto a abonar por el cliente. 
*/

int main(int argc, char *argv[]) {
	int alf = 0 ,vuelto = 0 ,doble = 20, simple = 10, triple = 30, efect = 0, pago = 0;
	float vueltodeb = 0, vueltocred = 0;
	printf("Que alfajor desea comprar? \n1)Alfajor simple. \n2)Alfajor doble. \n3)Alfajor triple\n");
	scanf(" %d", &alf);
	switch (alf)
	{
	case 1:
		printf("Eligio alfajor simple, Como desea pagar?:\n1) Efectivo. \n2) Tarjeta de debito. \n3) Tarjeta de credito\n");
			scanf(" %d", &pago);
		switch (pago)
		{
		case 1:
			printf("Con cuanto abona?\n");
			scanf(" %d", &efect );
			vuelto = efect - simple;
				printf("su vuelto es: %d\n", vuelto);
				break;
		case 2:
			printf("Al pagar por tarjeta de credito, se le cobrara un 2 de recargo por servicio\n");
			vueltocred =simple + (simple * 0.02);
			printf("Se le cobrara %f\n", vueltocred);
				break;
		case 3:
			vueltodeb =simple + (simple * 0.02);
			printf("Se le cobrara %f\n", vueltodeb);
				break;
		}
	case 2:
		printf("Eligio alfajor doble, Como desea pagar?:\n1) Efectivo. \n2) Tarjeta de debito. \n3) Tarjeta de credito\n");
			scanf("%d", &pago);
		switch (pago)
		{
		case 1:
			printf("Con cuanto abona?\n");
			scanf("%d", &efect );
			vuelto = efect - doble;
			printf("su vuelto es: %d\n", vuelto);
			break;
		case 2:
			printf("Al pagar por tarjeta de credito, se le cobrara un 2 de recargo por servicio\n");
			vueltocred = doble + (doble* 0.02);
			printf("Se le cobrara %f\n", vueltocred);
			break;
		case 3:
			vueltodeb =doble + (doble * 0.02);
			printf("Se le cobrara %f\n", vueltodeb);
			break;
		}
	case 3:
		printf("Eligio alfajor triple, Como desea pagar?:\n1) Efectivo. \n2) Tarjeta de debito. \n3) Tarjeta de credito\n");
			scanf("%d", &pago);
		switch (pago)
		{
		case 1:
			printf("Con cuanto abona?\n");
			scanf("%d", &efect );
			vuelto = efect - triple;
				printf("su vuelto es: %d\n", vuelto);
			break;
		case 2:
			printf("Al pagar por tarjeta de credito, se le cobrara un 2 de recargo por servicio\n");
			vueltocred = triple - (triple * 0.02);
			printf("Se le cobrara %f\n", vueltocred);
			break;
		case 3:
			vueltodeb = triple + (triple * 0.02);
			printf("Se le cobrara %f\n", vueltodeb);
			break;
		}
	}
	return 0;
}
