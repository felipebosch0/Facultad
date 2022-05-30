#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para determinar el precio de la entrada de un parque de acuerdo a la actividad a realizar.
	Montaña rusa: $200
	Samba: $150
	Autos chocadores: $100
	Martillo: $140*/
	int actividad= 0;
	printf ("1)Montaña rusa\n2)Samba\n3)Autos chocadores\n4)Martillo\n¿Que actividad desea realiar?: ");
	scanf ("%d", &actividad);
	
	switch (actividad){
	case 1:
		printf ("Debe abonar: $200");
		break;
	case 2:
		printf ("Debe abonar: $150");
		break;
	case 3:
		printf ("Debe abonar: $100");
		break;
	case 4:
		printf ("Debe abonar: $140");
		break;
	}
	return 0;
}
