#include <stdio.h> 

// ENUNCIADO: 
// Se requiere un algoritmo para elaborar la planilla de un empleado. 
// Para ello se dispone de sus horas trabajadas en el mes, asÃ­ como la de la tarifa por hora.

int main(int argc, char *argv[]) {
	
	// inicializacion de variables y aplicarle el type.
	int h_trabajadas = 0, tarifa = 0; int sueldo = 0;
	// Ingresamos la cantidad de horas trabajas
	printf("Ingrese las horas trabajas:");
	// Asignamos lo ingresado por el user a una variable.
	scanf("%d", &h_trabajadas);
	
	// Ingresamos la cantidad de horas trabajas
	printf("Ingrese la tarifa por hora trabajada:");
	// Asignamos lo ingresado por el user a una variable.
	scanf("%d", &tarifa);
	// Calculamos la multiplicacion entre las horas trabajadas y la tarifa por hora.
	// Asiganmos el resultado en la variable sueldo.
	sueldo= tarifa*h_trabajadas;
	
	// Mostramos por Pantalla el resultado del algoritmo.
	printf("El total a pagar es: $%d",sueldo);
	
	return 0;
}