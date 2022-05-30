#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float cuota= 0;
	int dia= 0;
	printf ("Ingrese el monto de la cuota: \n");
	scanf ("%f", &cuota);
	printf ("Ingrese el dia de pago: \n");
	scanf ("%d", &dia);
	
	if (dia<=10){
		printf ("Recargo: $0 \nValor final de la cuota: $%f", cuota);
	}
	else{
		if (cuota>5000){
			printf ("Recargo: $%f \nValor final de la cuota: $%f", cuota * 0.1, cuota * 1.1);
		}
		else{
			printf ("Recargo: $%f \nValor final de la cuota: $%f", cuota * 0.05, cuota * 1.05);
		}
	}
	return 0;
}

