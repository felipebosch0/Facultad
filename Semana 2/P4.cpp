#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int zona= 0;
	float peso= 0;
	printf("Donde desea enviar su paquete:\n1.America del norte y central\n2.America del sur\n3.Europa\n4.Asia y Oceania\n");
	scanf("%d", &zona);
	printf("Coloque el peso en gramos del paquete que desea enviar: \n");
	scanf("%f", &peso);
	
	switch(zona){
	case 1:
		printf("El costo de envio es de: $%f",peso*30);
		break;
	case 2:
		printf("El costo de envio es de: $%f",peso*20);
		break;
	case 3:
		printf("El costo de envio es de: $%f",peso*70);
		break;
	case 4:
		printf("El costo de envio es de: $%f",peso*100);
		break;
	default:
		printf("Opcion invalida");
		break;
	}
	return 0;
}