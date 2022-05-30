#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Diseñar y codificar un programa que permita el ingreso de los kilos de helado vendidos por día en una heladería durante un mes.  
	Luego crear un menú de opciones que  muestre los siguientes datos:
	
	a. Total de kilos de helado vendidos en un mes. 
	b. Monto recaudado en un mes, siendo que el kilo cuesta $500.
	c. El número de día del mes que se vendió más y cuántos kilos se vendieron.
	d. El número de día del mes que se vendió menos y cuántos kilos se vendieron.
	e. Mostrar si los empleados reciben o no el bono adicional, si cumplieron la meta de vender más de 5000 kilos de helado.
	
	*/
	float kilos= 0, total= 0, kilos_mas= 0, kilos_men= 0;
	int ii= 1, dia_mas= 0, dia_men= 0;
	
	printf ("Ingrese los kilos vendidos el dia %d: ", ii);
	scanf ("%f", &kilos);
	dia_mas= dia_men= ii;
	kilos_mas= kilos_men= kilos;
	
	for (ii=2;ii<31;ii++){
		printf ("Ingrese los kilos vendidos el dia %d: ", ii);
		scanf ("%f", &kilos);
		total+=kilos;
		if (kilos_mas<kilos){
			dia_mas= ii;
			kilos_mas= kilos;
		}
		if (kilos_men>kilos){
			dia_men= ii;
			kilos_men= kilos;
		}
	}
	
	printf ("Total de kilos vendidos en el mes: %fkg\nMonto recaudado: $%f\n", total, (total*500));
	printf ("Mayor venta: %fkg el dia %d\nMenor venta: %fkg el dia %d\n", kilos_mas, dia_mas, kilos_men, dia_men); 
	
	if (total>5000){
		printf ("Los empleados rebiran el bono adicional por vender mas de 5000kg en el mes");
	}
	else{
		printf ("Los empleados no recibiran bono porque no vendieron mas de 5000kg en el mes");
	}
	
	return 0;
}

