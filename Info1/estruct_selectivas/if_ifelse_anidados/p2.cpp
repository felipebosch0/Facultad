#include<stdio.h>
using namespace std;

// ENUNCIADO:
// Ingrese la cantidad de unidades que tiene una materia y la cantidad de unidades estudiadas por el alumno 
// y determine si el alumno estudio toda la materia o cuántas unidades le faltan estudiar.

int main (int argc, char *argv[]) {
	// incializamos varibles
	int un= 0, un_est= 0, falto = 0;

	// input cantidad de unidades de la materias
	printf ("Ingrese la cantidad de unidades de la materia: ");
	// asignamos lo ingresado a una variable
	scanf ("%d", &un);

	// input cantidad de unidades estudiadas
	printf ("Ingrese unidades estudidas: ");
	// asignamos lo ingresado a una variable
	scanf ("%d", &un_est);
	
	// si unidades estudiadas y unidades de la materias son iguales
	if (un_est==un){
		// mostramos 
		printf ("EL alumno estudio toda la materia");
	}
	// si no se cumple la condiciona anterior
	else{
		// calculamos lo faltante
		falto = un - un_est;
		// mostramos lo faltante
		printf ("Le falta estudiar %d unidad/es", falto);
		
	}
	return 0;
}

