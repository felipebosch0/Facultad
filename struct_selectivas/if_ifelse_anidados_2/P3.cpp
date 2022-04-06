#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
//Escriba un programa que pida tres n�meros y que escriba si son los tres iguales, si hay dos iguales o si son los tres distintos.
	float num1= 0, num2= 0,num3= 0;
	printf ("Ingrese tres numeros: \n");
	scanf ("%f%f%f", &num1, &num2, &num3);
	
	if ((num1==num2)&&(num2==num3)){
		printf ("Los tres numeros son iguales");
	}
	else{
		if ((num1!=num2)&&(num1!=num3)&&(num2!=num3)){
			printf ("Los tres numeros son distintos");
		}
		else{
			printf ("Hay dos numeros iguales");
		}
	}
	return 0;
}