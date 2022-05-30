#include<stdio.h>

// ENUNCAIDO:
// Diseñar y codificar un programa que permita simular una calculadora de números enteros.
// Luego de recibir dos operandos enteros, se deben poder realizar las siguientes opciones: 1 Sumar, 2 Restar, 3 Multiplicar, 4 Dividir. Si el usuario ingresa una opci´on inv´alida, esta debe ser informada.



int main (int argc, char *argv[]) {
    // Inicializamos varibles y aplicamos un type.
	float num1= 0, num2= 0,sum= 0,res= 0,prod= 0,div= 0; int codig= 0;
	
    // Input por teclado numeros
	printf("Ingrese dos numeros: \n");
    // Asignamos los numeros a las variables
	scanf("%f%f", &num1, &num2);
	
	// Calculos
	sum= num1+num2;
	res= num1-num2;
	prod= num1*num2;
	div= num1/num2;
	
    // Input por teclado codigo
	printf("Ingrese un codigo entre (1,2,3,4): ");
    // Asignamos el codigo a una variable
	scanf("%d", &codig);
	
    // Switch utilizando la variable codig
	switch(codig){
		case 1:
			printf("%f", sum);
			break;
		case 2:
			printf("%f", res);
			break;
		case 3:
			printf("%f", prod);
			break;
		case 4:
			printf("%f", div);
			break;
		default:
			printf("¡Codigo invalido!");
			break;
	}
	return 0;
}