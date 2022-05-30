#include <stdio.h>

// ENUNCIADO:
//Realiza un programa que calcule el perímetro y área de las siguientes figuras geométricas:

int main (int argc, char *argv[]) {
    // Inicializacion de variables y type
	float clado= 0, rlargo= 0, rancho= 0, cuad_p= 0,cuad_a, rect_p= 0, rect_a= 0;

    // El usuario ingresa los datos del cuadrado
	printf ("Ingrese un lado del cuadrado: ");
    // Asignamos el dato del lado del cuadrado en la variable clado
	scanf ("%f", &clado);

    // El usuario ingresa el dato del largo del rectangulo
	printf ("Ingrese el largo del rectangulo: ");
    // Asignamos el dato en la variable rlargo
	scanf ("%f", &rlargo);

    // El usuario ingresa el dato del ancho del rectangulo
	printf ("Ingrese el ancho del rectangulo: ");
    // Asignamos el dato en la variable rancho
	scanf ("%f", &rancho);
    
    // Calculos
	cuad_p= 4 * clado;
	cuad_a= clado*clado;
	rect_p= (2*rlargo)+(2*rancho);
	rect_a= rlargo*rancho;

    // print
	printf ("El perimetro del cuadrado es: %f \nSu area es: %f\n", cuad_p, cuad_a);
	printf ("El perimetro del rectangulo es: %f .\nEl area del rectangulo es: %f", rect_p, rect_a);
	return 0;
}