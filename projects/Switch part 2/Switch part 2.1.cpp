#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Una maquina expendedora de bebidas tiene agua, coca, sprite o pritty.
	Hacer un programa que permita elegir que gaseosa quiere, teniendo encuenta que:
	agua: $100
	coca: $150
	sprite: $140
	pritty: $115
	
	Luego debe mostrar el total a abonar.*/
	int bebida= 0, cant= 0;
	printf ("1)Agua\n2)Coca\n3)Sprite\n4)Pritty\n\n¿Que bebida desea?: ");
	scanf ("%d", &bebida);
	printf ("\nCuantas desea: ");
	scanf ("%d", &cant);
	
	switch (bebida){
	case 1:
		printf ("El total a abonar es: $%d", 100*cant);
		break;
	case 2:
		printf ("El total a abonar es: $%d", 150*cant);
		break;
	case 3:
		printf ("El total a abonar es: $%d", 140*cant);
		break;
	case 4:
		printf ("El total a abonar es: $%d", 115*cant);
		break;
	}
	return 0;
}

