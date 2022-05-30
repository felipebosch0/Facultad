#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//1. Se tiene un vector de 5 elementos con valores numéricos enteros. Luego mostrar los valores que están en posiciones impares.
	int val[]={1,2,3,4,5}, ii=0;
	printf ("Los numeros pares son: \n");
	for (ii=0;ii<5;ii++){
		if ((val[ii]%2)==0){
			printf ("%d\n", val[ii]);
		}
	}
	return 0;
}

