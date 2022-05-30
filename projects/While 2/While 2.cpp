#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float num1= 0, num2= 0, resultado= 0;int op= 0;char seguir='s';
	printf ("Ingrese un numero: ");
	scanf ("%f", &num1);
	printf ("Ingrese otro numero: ");
	scanf ("%f", &num2);
	
	while ((seguir=='s')||(seguir=='S')){
		printf ("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\nSeleccione una opcion: ");
		scanf ("%d", &op);
		switch (op){
		case 1:
			resultado= num1+num2;
			printf ("La suma es: %f\n", resultado);
			break;
		case 2:
			resultado= num1-num2;
			printf ("La resta es: %f\n", resultado);
			break;
		case 3:
			resultado= num1*num2;
			printf ("La multiplicacion es: %f\n", resultado);
			break;
		case 4:
			resultado= num1/num2;
			printf ("La division es: %f\n", resultado);
			break;
		default:
			printf ("Opcion invalida, vuelva a ingresar una opcion\n");
			break;
		}
		printf ("¿Desea seguir operando con los mismos numeros? S/N: ");
		scanf (" %c", &seguir);
	}

	return 0;
}

