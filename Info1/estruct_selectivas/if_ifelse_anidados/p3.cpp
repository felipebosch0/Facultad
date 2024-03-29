#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Una empresa de telefonía lanza una promoción a sus clientes que han llamado
// mas de 1000 minutos de llamadas locales y 1000 minutos de llamadas a larga distancia haciéndoles un descuento en su factura del 10%. 
// Téngase en cuenta que el precio del minutos de llamadas locales es de $0.05 y de las llamadas de larga a distancia es de $0.10.
// Realice un algoritmo en la cual solicite los datos necesarios al cliente e informar si es o no beneficiario de tal promoción y
// cuanto debería abonar en su próxima factura. 

int main (int argc, char *argv[]) {
	// incializamos variables 
	int  min= 0, dis= 0 ; float pagar= 0;

	// input minutos por teclado
	printf ("Ingrese minutos de llamadas locales: ");
	// asignamos lo ingresado en una variable

	scanf ("%f", &min);
	// input por teclado
	printf ("Ingrese minutos de llamadas delarga distancia: ");
	// asignamos lo ingresado en una variable
	scanf ("%f", &dis);
	
	// si cumple las condiciones
	if ((min >= 1000)&&(dis >= 1000)){
		// calculos
		pagar= (((min*0.05)+(dis*0.1))*0.9);
		// mostrar
		printf ("Debera abonar $%f en su proxima factura", pagar); 
	}

	// si no las cumple
	else{
		// mostrar
		printf ("No recibira ningun descuento");
	}
	return 0;
}

