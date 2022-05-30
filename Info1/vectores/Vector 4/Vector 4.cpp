#include<iostream>
#include<ctime>
using namespace std;

int main (int argc, char *argv[]) {
//4. Crear un arreglo de 10 números enteros y aleatorios. Luego mostrar los valores pares.
	int vec[10]={0}, num=0;
	//srand(time(NULL));
	printf ("Valores\n");
	for (int ii=0;ii<10;ii++){
		num= rand()%100+1;
		vec[ii]= num;
		printf ("%d\n", vec[ii]); 
	}
	printf ("Valores pares:\n");
	for (int ii=0;ii<10;ii++){
		if (vec[ii]%2==0){
			printf ("%d\n", vec[ii]);
		}
	}
	return 0;
}

