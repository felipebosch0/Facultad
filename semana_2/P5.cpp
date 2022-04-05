#include<stdio.h>
using namespace std;

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