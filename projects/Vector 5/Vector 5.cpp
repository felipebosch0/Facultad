#include<iostream>
using namespace std;
#define max 50
int main (int argc, char *argv[]) {
/*5. Se desea cargar en un vector una cantidad de saldos de proveedores, 50 como máximo. 
	La carga finaliza con un saldo menor o igual a cero. Además, se pide:
	
	a. Cantidad de saldos cargados.
	b. Promedio de saldos.
	c. Cantidad de saldos menores al promedio.
	d. Cantidad de saldos mayores al promedio.
	e. Calcular cuánto fue lo recaudado en el mes.
	*/
	int cant= -1, men_p= 0, may_p= 0, ii= 0, total= 0;
	float saldos[max]= {0};
	float saldo= 1, prom= 0, suma= 0;
	total= max;
	
	for (ii=0;(ii<max)&&(saldo>0);ii++){
		printf ("Ingrese el saldo N%d o 0 para salir: ", (ii+1));
		scanf ("%f", &saldo);
		saldos[ii]= saldo;
		suma+=saldo;
		cant++;
	}
	
	prom= (suma/cant);
	
	for (ii=0;ii<max;ii++){
		if (saldos[ii]<prom){
			men_p++;
		}
		if (saldos[ii]>prom){
			may_p++;
		}
	}
	
	printf ("Cantidad de saldos cargados: %d\nPromedio de saldos: %f\nSaldos menores al promedio: %d\n", cant, prom, ((men_p-(total-cant))));
	printf ("Saldos mayores al promedio: %d\nRecaudado en el mes: %f", may_p, suma);
	
	return 0;
}

