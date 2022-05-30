#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
//Escriba un programa que pida dos números enteros y que calcule su división,
//escribiendo si la división es exacta o no. Tener en cuenta que no se puede dividir por cero
	int num1= 0, num2= 0;
	printf ("Ingrese dos numeros enteros para calcular su division: \n");
	scanf ("%d%d", &num1, &num2);
	if ((num1==0)||(num2==0)){
		printf ("No se puede dividir por cero");
	}
	else {
		if (num1%num2!=0){
			printf ("Division no exacta");
		}
		else{
			if (num1%num2==0){
				printf ("Division exacta");
			}
		}
	}
	return 0;
}

