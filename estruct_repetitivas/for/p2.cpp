#include<stdio.h>
// Desarrollar un programa que permita la carga de 5 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.

using namespace std;

int main(int argc, char *argv[]) {
	// declaracion e inicializacion de variables
    int n1 = 0, sumatoria = 0;	
	
    // for que se repite 5 veces
	for (int i = 1; i <= 5; ++i) {
		printf("ingrese el numero a sumar");
		scanf("%d", &n1);
		sumatoria = sumatoria +  n1;
	}
	printf("%d fue la cantidad que sumo", sumatoria);
	return 0;
}
