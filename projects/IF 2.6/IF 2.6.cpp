#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
/*Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes expresado en dólares USD:
	
	Renta	         | Tipo impositivo
	Menos de 20000	 |    5%
	de 20000 a 30000 |	 10%
	de 30000 a 40000 |	 15%
	mas de 40000	 |   20%
	Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el tipo impositivo que le corresponde. */
	float renta= 0;
	printf ("Ingrese su renta anual: $");
	scanf ("%f", &renta);
	
	if (renta<20000){
		printf ("El tipo impositivo que le corresponde es del 5 porciento");
	}
	else{
		if ((renta>=20000)&&(renta<30000)){
			printf ("El tipo impositivo que le corresponde es del 10 porciento");
		}
		else{
			if (renta>40000){
				printf ("El tipo impositivo que le corresponde es del 20 porciento");
			}
			else{
				printf ("El tipo impositivo que le corresponde es del 15 porciento");
			}
		}
	}
	return 0;
}

