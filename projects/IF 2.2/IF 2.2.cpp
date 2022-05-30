#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
//Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el mayor o que escriba que son iguales.
	float num1= 0, num2= 0;
	printf ("Ingrese dos numeros: \n");
	scanf ("%f%f", &num1, &num2);
	
	if (num1>num2){
		printf ("%f es mayor que %f", num1, num2);
	}
	else{
		if (num1<num2){
			printf ("%f es menor que %f", num1, num2);
		}
		else{
			printf ("Son numeros iguales");
		}
	}
	
	return 0;
}

