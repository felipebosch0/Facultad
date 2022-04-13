#include<stdio.h>
// Realizar un programa que muestre la tabla de multiplicar del 1 al 10 de un numero.
// Ejemplo: Si ingreso 2 deberá aparecer en pantalla los valores 2, 4, 6, hasta el 20.

using namespace std;

int main(int argc, char *argv[]) {
    // incializamos variables
	int n1 = 0, calc = 0;
    // preguntamos el numero
	printf("Ingrese el numero para generar su tabla: ");
	// asigno lo ingresadp a una variable
    scanf("%d", &n1);
	
    // for del numero 1 al 10
	for (int i = 1; i <= 10; ++i) {
            // creo una variable en la que ya hago el calculo
			calc = n1 * i;

            // muestro por pantalla la variable; 
            // n1 (Ingresado por el usuario).
            // i suma 1 numero por cada vez que atraviza el for.
            // calc calculo previamente hecho.
			printf("%d * %d= %d\n", n1, i, calc);
	}

	return 0;
}