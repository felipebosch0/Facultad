#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Diseñar y codificar un programa que permita simular una calculadora de números enteros. 
Luego de recibir dos operandos enteros, se deben poder realizar las siguientes opciones: 
1 Sumar, 2 Restar, 3 Multiplicar, 4 Dividir. Si el usuario ingresa una opci´on inv´alida, esta debe ser informada.*/
	int num1= 0, num2= 0, opc= 0;
	float div= 0;
	printf ("Ingrese dos numeros entero distintos de 0:\n");
	scanf ("%d%d", &num1, &num2);
	printf ("1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\nQue operacion desea realizar: ");
	scanf ("%d", &opc);
	
	switch (opc){
	case 1:
		printf ("%d + %d = %d", num1, num2, (num1+num2));
		break;
	case 2:
		printf ("%d - %d = %d", num1, num2, (num1-num2));
		break;
	case 3:
		printf ("%d * %d = %d", num1, num2, (num1*num2));
		break;
	case 4:
		div= num1/num2;
		printf ("%d / %d = %f", num1, num2, div);
		break;
	default:
		printf ("Opcion invalida");
		break;
	}
	
	return 0;
}

