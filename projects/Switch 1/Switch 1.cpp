#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Ingrese un número y diga a qué día de la semana corresponde (la semana empieza el domingo).	
	int num= 0;
	printf ("ingrese un numero del 1 al 7: ");
	scanf ("%d", &num);
	
	switch (num){
	case 1:
		printf ("Domingo");
		break;
	case 2:
		printf ("Lunes");
		break;
	case 3:
		printf ("Martes");
		break;
	case 4:
		printf ("Miercoles");
		break;
	case 5:
		printf ("Jueves");
		break;
	case 6:
		printf ("Viernes");
		break;
	case 7:
		printf ("Sabado");
		break;
	}
	return 0;
}

