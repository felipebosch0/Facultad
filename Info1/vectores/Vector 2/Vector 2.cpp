#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*2. Realice un programa que permita cargar 5 números enteros en un vector. 
	Luego calcule el promedio de ellos. Finalmente mostrar todos los valores y su promedio.*/
	int vec[5]= {0};
	float prom= 0;
	for (int ii=0;ii<5;ii++){
		printf ("Ingrese un numero entero: ");
		scanf ("%d", &vec[ii]);
	}
	prom = (vec[0]+vec[1]+vec[2]+vec[3]+vec[4])/5;
	printf ("\nValor 1: %d\nValor 2: %d\nValor 3: %d\nValor 4: %d\nValor 5: %d\n",vec[0],vec[1],vec[2],vec[3],vec[4]);
	printf ("\nPromedio: %f", prom);
	return 0;
}

