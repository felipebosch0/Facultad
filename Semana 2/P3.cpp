#include<stdio.h>

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