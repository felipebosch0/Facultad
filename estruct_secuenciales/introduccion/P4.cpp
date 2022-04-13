#include <stdio.h>

// ENUNCIADO:
// Elaborar un algoritmo que permita ingresar el número de partidos ganados, perdidos y empatados,
// por algún equipo en el torneo apertura, se debe de mostrar su puntaje total, 
// teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, empatado 1 y perdido 0 puntos.

int main(int argc, char *argv[]){
	
	// Inicializamos varibles y aplicamos un type.
	int win , lost , tie, punt = 0;
	
	// El usuario ingresa la cantidad de partidos ganados.
	printf("Ingrese la cantidad de partidos que gano el equipo:");
	// Asignamos la cantidad de partidos ganados a la variable win.
	scanf("%d", &win);
	
	// El usuario ingresa la cantidad de partidos perdidos.
	printf("Ingrese la cantidad de partidos que perdio el equipo:");
	// Asiganamos la cantidad de partidos perdidos en la variable lost.
	scanf("%d", &lost);
	
	// El usuario ingresa la cantidad de partidos empatados
	printf("Ingrese la cantidad de partidos que empato el equipo:");
	// Asiganamos la cantidad de empates en la variable tie.
	scanf("%d", &tie);
	
	// Calculamos la multiplicacion de win *3 + lost*1
    // Asignamos el resultado en la variable res.
	punt= win*3 + lost;
	
    // Mostramos por pantalla el resultado del algoritmo.
	printf("Victorias: %d.\nDerrotas: %d.\nEmpates: %d.\nEl puntaje total es: %d.", win,lost ,tie ,punt);		   
		
    return 0;
}