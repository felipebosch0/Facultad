#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//2. Realizar un algoritmo para determinar la cantidad de números positivo y negativos que han sido ingresados.
	float num= 0;
	int pos= 0, neg= 0;
	
	do{
		printf ("Ingrese un numero o 0 para finalizar: ");
		scanf ("%f", &num);
		if (num>0){
			pos++;
		}
		else{
			if (num<0){
				neg++;
			}
		}
	} while(num!=0);
	printf ("Numero positivos: %d\nNumeros negativos: %d", pos, neg);
	return 0;
}

