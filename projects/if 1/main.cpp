#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int num=0;
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &num);
	if (num>0){
		printf ("Su numero es positivo");
	}
	else{
		if(num<0){
			printf ("su numero es negativo");
		}
		else{
			printf ("Su numero es cero");
		}
	}
	return 0;
}

