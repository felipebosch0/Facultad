#include<stdio.h>
using namespace std;

// ENUNCIADO:

// un trabajador quiere saber cual sera su sueldo semanal, se sabe que si trabaja 40 horas o menos,
// se le pagara $20 por hora, pero si trabaja mas de 40 horas entonces las horas extras se le pagaran a $25 por hora.

int main (int argc, char *argv[]) {
	
	// inicializacion de variables
	int h= 0,sueldo= 0;
	
	// input horas trabajadas
	printf ("Ingrese la cantidad de horas trabajadas: ");
	// asignamos a una variable
	scanf ("%d", &h);
	
	// si horas es menor igual a 40
	if (h<=40){
		// calculo de sueldo
		sueldo = h *20;
		printf ("El empleado a trabajado %d, le corresponde un sueldo de $%d", h ,sueldo);
	}
	// sino
	else{
		sueldo= ((h-40)*25) + (40 * 20);
		printf ("El empleado a trabajado %d, le corresponde un sueldo de $%d",h ,sueldo);
	}
	return 0;
}

