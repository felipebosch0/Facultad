#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int num= 0;
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &num);
	
	if (num%2==0){
		printf ("El numero ingresado es par");
	}
	else{
		printf ("El numero ingresado es impar");
	}
	return 0;
}

