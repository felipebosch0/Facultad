#include<iostream>
using namespace std;

int main (int argc, char argv[]) {
	/5. Se desea cargar en un vector una cantidad de saldos de proveedores, 50 como máximo. 
		La carga finaliza con un saldo menor o igual a cero. Además, se pide:
		
		a. Cantidad de saldos cargados.
		b. Promedio de saldos.
		c. Cantidad de saldos menores al promedio.
		d. Cantidad de saldos mayores al promedio.
		e. Calcular cuánto fue lo recaudado en el mes.
		*/
		float max= 50;
	float saldos[max]= {0}, saldo= 1, prom= 0, suma= 0, ii= 0;
	int cant= 0, men_p= 0, may_p= 0 ;
	while (saldo>0){
		for (ii=0;ii<max;ii++){
			printf ("Ingrese el saldo N°%d o 0 para salir: ", ii++);
			scanf ("%f", &saldo);
			saldos[ii]= saldo;
			suma+=saldo;
			cant++;
		}
	}
	prom= (suma/cant);
	for (ii=0;ii<max;ii++){
		if (saldos[ii]<prom){
			men_p++;
		}
		if (saldo[ii]>prom){
			may_p++;
		}
	}
	printf ("Cantidad de saldos cargados: %d\nPromedio de saldos: %f\nSaldos menores al promedio: %d\n", cant, prom, men_p);
	printf ("Saldos mayores al promedio: %d\nRecaudado en el mes: %f", may_p, suma);
	return 0;
}
