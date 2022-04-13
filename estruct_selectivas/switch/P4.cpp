#include<stdio.h>
// ENUNCIADO 
// Realice un algoritmo que solicite una letra, 
// y luego diga si la misma es vocal o consonante.



int main (int argc, char *argv[]) {
	char letra;
	printf("Ingrese una letra: ");
	scanf("%c", &letra);

	switch(letra){
	case 'a':
	case 'e':	
	case 'i':
	case 'o':
	case 'u':
		printf("La letra %c. Es una VOCAL", letra);
		break;
	default:
		printf("La letra %c. Es una CONSONANTE", letra);
		break;
	}
	
	return 0;
}