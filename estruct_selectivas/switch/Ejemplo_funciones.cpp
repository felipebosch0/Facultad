#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

//prototipado de la funcion.

//prototipado de las funciones paso por valor
int encontrarMax(int, int); // int float char double si devuelve valor
void encontrarMin(int, int); //void no devueve valor


//prototipado de las funciones de paso por referencia - los arreglos

/*Se define la directiva para el tamaño del arreglo, 
despues de la inclusion de las librerias y antes de los 
prototipados de las funciones. */

#define MAX 100 //El nombre es en mayascula.

void mostrar(int [MAX][MAX],int);

void mostrar_3x3(int [3][3]);


int main(int argc, char *argv[]) {

	int primernum=0, segundonum=0, numMax=0;
	int arreglo_3x3[3][3], arreglo[MAX][MAX],tamano=0, i=0, j=0;
	srand(time(NULL));
	
	printf("Mayor y Menor. \nIntroducir el 1er numero: ");
	scanf("%d",&primernum);
	printf("Introducir el 2do numero: ");
	scanf("%d",&segundonum);
	//llama a la funcion y guarda el valor 
	//devuelto en la variable numMax
	numMax=encontrarMax(primernum, segundonum); 
	printf("\nEl maximo es: %d",numMax);
	//llama a la funcion.
	encontrarMin(primernum, segundonum); 
	
	
	//funciones con arreglos
	printf("\n\nCreando un arreglo de 3x3\n");
	//Se carga el arreglo con numeros enteros del 1 al 100 de manera aleatoria.
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			arreglo_3x3[i][j]=rand()%100+1;
		}
	}
	mostrar_3x3(arreglo_3x3);
	
	printf("\nIngrese el tamaño del arreglo bidimensional que desea generar: ");
	scanf("%d",&tamano);
	//Se carga el arreglo con numeros enteros del 1 al 100 de manera aleatoria.
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			arreglo[i][j]=rand()%100+1;
		}
	}
	mostrar(arreglo, tamano);
	return 0;
}// cirre del main




//Desarrollo de las funciones
int encontrarMax(int primer, int segundo)
{  
	if(primer>=segundo)
		return primer;//devuelve un valor. (int) 
	else
		return segundo;//devuelve un valor. (int) 
}

void encontrarMin(int primernum, int segundonum)
{  
	int numMin=0;
	if(primernum<=segundonum)
		numMin=primernum;
	else
		numMin=segundonum;
	printf("\nEl minimo es: %d",numMin);
	return;//no devuelve un valor. (void)
}


//Desarrollo de la funcion utilizando arreglos.
void mostrar(int arreglo[MAX][MAX],int tamano) {
	int i=0, j=0;
	printf("\nTABLA DE VALORES DE %dx%d\n", tamano, tamano);
	for(i=0; i<tamano; i++) {
		for(j=0; j<tamano; j++) {
			printf("%d\t", arreglo[i][j]);
		}
		printf("\n");
	}
}

void mostrar_3x3(int arreglo[3][3]) {
	int i=0, j=0;
	printf("\nTABLA DE VALORES DE 3X3\n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d\t", arreglo[i][j]);
		}
		printf("\n");
	}

}
