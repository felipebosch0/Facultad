#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
/*Los alumnos de un curso de ingl�s se han dividido en dos grupos A y B
	de acuerdo a la inicial del apellido y a la nota obtenida en el examen de nivelaci�n. 
	El grupo A est� formado por los apellidos de la A-M inclusive con las notas mayores o iguales a 7 
	y el grupo B de la N-Z con notas menores a 7. Escribir un programa que pregunte al usuario la inicial de su apellido 
	y la nota obtenida en el examen, finalmente muestre por pantalla cual es el grupo que le corresponde.*/
	int nota= 0; char inicial= 0;
	printf ("Ingrese la inicial de su apellido: ");
	scanf ("%s", &inicial);
	printf ("Ingrese la nota obtenida en el examen: ");
	scanf ("%d", &nota);
	
	switch(inicial){
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
		if (nota>=7){
			printf ("Le corresponde el grupo A");
		}
		else{
			printf ("Le corresponde el grupo B");
		}
		break;
	case 'n':
	case '�':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
		if (nota<7){
			printf ("Le corresponde el grupo B");
		}
		else{
			printf ("Le corresponde el grupo A");
		}
		break;
	}
	return 0;
}

