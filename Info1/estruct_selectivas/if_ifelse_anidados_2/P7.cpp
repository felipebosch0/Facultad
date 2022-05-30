#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
/*Escribir un programa para una empresa que tiene salas de juegos para todas las edades y 
	quiere calcular de forma automatica el precio que debe cobrar a sus clientes por entrar. 
	El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. 
	Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años 
	debe pagar $100 y si es mayor de 18 años, $200.*/
	int edad= 0;
	printf ("Ingrese la edad del cliente: ");
	scanf ("%d", &edad);
	
	if (edad<4){
		printf ("El cliente puede entrar gratis");
	}
	else{
		if (edad>18){
			printf ("El cliente debe abonar $200");
		}
		else{
			printf ("El cliente debe abonar $100");
		}
	}
	return 0;
}

