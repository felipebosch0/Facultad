#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Se solicita un algoritmo que calcule cuanto ha podido ahorrar en un año una persona. 
//Para ello se solicita cuanto ha sido su sueldo en cada uno de los meses y cuanto ha gastado en cada uno de los meses.  
	float sueldo= 0, gastos= 0, ahorro= 0, sum_s= 0, sum_a= 0;
	int ii=0, mes= 0;
	
	for (ii=0; ii<12; ii++){
		mes++;
		printf ("Sueldo mes %d: ", mes);
		scanf ("%f", &sueldo);
		printf ("Gastos mes %d: ", mes);
		scanf ("%f", &gastos);
		sum_s+=sueldo;
		sum_a+=gastos;
	}
	ahorro= sum_s - sum_a;
	printf ("Su ahorro anual fue de: $%f", ahorro);
	return 0;
}

