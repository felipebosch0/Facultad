#include<stdio.h>
// Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano. 
// Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. 
// Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
using namespace std;

int main(int argc, char *argv[]) {
	int cant= 0, x = 0, y = 0;
	printf("Ingrese la cantida de puntos a procesar");
	scanf("%d", &cant);
	for (int i = 1  ; i <= cant; ++i){
		printf("ingrese la %d coordenada x:", i);
		scanf("%d", &x);
		printf("ingrese la %d coordenada y:", i);
		scanf("%d", &y);
	}

	
	return 0;
}
