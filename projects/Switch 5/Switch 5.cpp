#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Una compañía de envío internacional tiene servicio en algunos países del mundo. 
	El costo por el servicio de envío se basa en el peso del paquete y la zona a la que va dirigido. 
	
	Zona	Ubicación	Costo por gramo
	1	América del Norte y Central 	$30
	2	América el Sur	$20
	3	Europa	$70
	4	Asia y Oceanía	$100*/
	int zona= 0;
	float peso= 0;
	printf ("Ingrese el peso en gramos de su paquete: ");
	scanf ("%f", &peso);
	printf ("1	America del Norte y Central\n2	America el Sur\n3	Europa\n4	Asia y Oceania\nDonde desea enviar su paquete: ");
	scanf ("%d", &zona);
	
	switch (zona){
	case 1:
		printf ("El costo es de: $%f", 30*peso);
		break;
	case 2:
		printf ("El costo es de: $%f", 20*peso);
		break;
	case 3:
		printf ("El costo es de: $%f", 70*peso);
		break;
	case 4:
		printf ("El costo es de: $%f", 100*peso);
		break;
	default:
		printf ("Opcion invalida");
		break;
	}
	return 0;
}

