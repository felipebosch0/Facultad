#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*1. Una compa��a de env�o internacional tiene servicio en algunos pa�ses del mundo. 
	El costo por el servicio de env�o se basa en el peso del paquete y la zona a la que va dirigido. 
	Si el paquete pesa mayor igual a 300 gr el costo por zona es el doble.
	
	Zona	Ubicaci�n	Costo por gramo
	1	Am�rica del Norte y Central 	$30
	2	Am�rica el Sur	$20
	3	Europa	$70
	4	Asia y Ocean�a	$100
	
	
	Realice un algoritmo para determinar el costo de env�o de un paquete.*/
	int ubicacion= 0;
	float peso= 0;
	printf ("Ingrese el peso en gramos del paquete que desea enviar: ");
	scanf ("%f", &peso);
	printf ("1)America del Norte y Central\n2)America del Sur\n3)Europa\n4)Asia y Oceania\n�A donde desea enviar su paquete?: ");
	scanf ("%d", &ubicacion);
	switch(ubicacion){
	case 1:
		if (peso>=300){
			printf ("El costo de envio sera de: $%f", peso*60);
		}
		else{
			printf ("El costo de envio sera de: $%f", peso*30);
		}
		break;
	case 2:
		if (peso>=300){
			printf ("El costo de envio sera de: $%f", peso*40);
		}
		else{
			printf ("El costo de envio sera de: $%f", peso*20);
		}
		break;
	case 3:
		if (peso>=300){
			printf ("El costo de envio sera de: $%f", peso*140);
		}
		else{
			printf ("El costo de envio sera de: $%f", peso*70);
		}
		break;
	case 4:
		if (peso>=300){
			printf ("El costo de envio sera de: $%f", peso*200);
		}
		else{
			printf ("El costo de envio sera de: $%f", peso*100);
		}
		break;
	default:
		printf ("Opcion invalida");
		break;
	}
	
	return 0;
}

