#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*Realice un algoritmo que solicite una letra, y luego diga si la misma es vocal o consonante.*/
	char letra= 0;
	printf ("Ingrese una letra: ");
	scanf (" %c", &letra);
	
	switch (letra){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf ("Vocal");
		break;
	default:
		printf ("Consonante");
		break;
	}
	return 0;
}

