#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float num1= 0, num2= 0, sum= 0, res= 0, mult= 0, div= 0;int op= 0;char seguir='s';
	printf ("Ingrese un numero: ");
	scanf ("%f", &num1);
	printf ("Ingrese otro numero: ");
	scanf ("%f", &num2);
	printf ("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\nSeleccione una opcion: ");
	scanf ("%d", &op);
	
	sum= num1+num2;
	res= num1-num2;
	mult= num1*num2;
	div= num1/num2;
	
	while ((seguir!='n')||(seguir!='N')){
		switch (op){
		case 1:
			printf ("La suma es: %f\n", sum);
			break;
		case 2:
			printf ("La resta es: %f\n", res);
			break;
		case 3:
			printf ("La multiplicacion es: %f\n", mult);
			break;
		case 4:
			printf ("La division es: %f\n", div);
			break;
		default:
			printf ("Opcion invalida, vuelva a ingresar una opcion");
			break;
		}
		printf ("�Desea seguir operando con los mismos numeros? S/N: ");
		scanf (" %c", &seguir);
		if ((seguir=='s')||(seguir=='S')){
			printf ("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\nSeleccione una opcion: ");
			scanf ("%d", &op);
		}
	}

	return 0;
}

