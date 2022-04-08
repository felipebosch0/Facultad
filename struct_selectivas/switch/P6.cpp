#include<stdio.h>
using namespace std;
// ENUNCIADO:
// El banco de la ciudad ha decidido aumentar el límite de crédito de las tarjetas de crédito de sus clientes, 
// para esto considera que si su cliente tiene 
// tarjeta tipo 1, el aumento será de 25 %;
// si tiene tipo 2, será de 35 %; 
// si tiene tipo 3, de 40 %, 
// para cualquier otro tipo, de 50 %.
// Realice un algoritmo para determinar el nuevo límite de crédito que tendrá una persona en su tarjeta, 
// para ello deberá solicitar el tipo de tarjeta y el monto actual de su tarjeta.



int main (int argc, char *argv[]) {
	int tarjeta= 0;
	float monto= 0;
	printf("Seleccione su tipo tarjeta:\n1.Terjeta naranja\n2.Mastercard\n3.Visa\n4.Otra\n");
	scanf("%d", &tarjeta);
	printf("Ingrese el monto actual de su tarjeta:\n$");
	scanf("%f", &monto);
	
	switch(tarjeta){
	case 1:
		printf("Su nuevo limite de credito es de: $%f", monto*1.25);
		break;
	case 2:
		printf("Su nuevo limite de credito es de: $%f", monto*1.35);
		break;
	case 3:
		printf("Su nuevo limite de credito es de: $%f", monto*1.40);
		break;
	case 4:
		printf("Su nuevo limite de credito es de: $%f", monto*1.50);
		break;
	default:
		printf("Opcion invalida");
		break;
	}
	return 0;
}