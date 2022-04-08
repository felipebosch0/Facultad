#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Ingrese la cantidad de unidades que tiene una materia y la cantidad de unidades estudiadas por el alumno 
// y determine si el alumno estudio toda la materia o cuántas unidades le faltan estudiar.

int main (int argc, char *argv[]) {
	int un= 0, un_est= 0;
	printf ("Ingrese la cantidad de unidades de la materia: ");
	scanf ("%d", &un);
	printf ("Ingrese unidades estudidas: ");
	scanf ("%d", &un_est);
	
	if (un_est==un){
		printf ("EL alumno estudio toda la materia");
	}
	else{
		if (un_est<un){
			printf ("Le falta estudiar %d unidad/es", (un - un_est));
		}
	}
	return 0;
}

