#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float local= 0, distance= 0, abonar= 0;
	printf ("Ingrese minutos de llamadas locales: ");
	scanf ("%f", &local);
	printf ("Ingrese minutosde llamadas delarga distancia: ");
	scanf ("%f", &distance);
	
	if ((local >= 1000)&&(distance >= 1000)){
		abonar= (((local*0.05)+(distance*0.1))*0.9);
		printf ("Debera abonar $%f en su proxima factura", abonar); 
	}
	else{
		printf ("No recibira ningun descuento");
	}
	return 0;
}

