#include<iostream>
#include<math.h>
using namespace std;

int main (int argc, char *argv[]) {
/*5. Crear un menú de opciones con las siguientes operaciones: 
		
	a. Elevar a la potencia de 2 un numero.
		
	b. Raíz cuadrada de un numero.
		
	c. Raíz cubica de un numero. 
		
	d. Calcular el seno, coseno y tangente de un angulo.´*/
	float num= 0;
	char opc= 0, seguir= 's';
	
	do{
		printf ("a)Elevar a la potencia de 2 un numero\nb)Raiz cuadrada de un numero\nc)Raiz cubica de un numero\n");
		printf ("d)Calcular el seno, coseno y tangente de un angulo\nElija una opcion: ");
		scanf (" %c", &opc);
		switch(opc){
		case 'a':
			printf ("Ingrese un numero: ");
			scanf ("%f", &num);	
			printf ("%f al cuadrado es: %f\n", num, (num*num));
			break;
		case 'b':
			printf ("Ingrese un numero: ");
			scanf ("%f", &num);	
			printf ("La raiz cuadrada de %f es: %f\n", num, sqrt(num));
			break;
		case 'c':
			printf ("Ingrese un numero: ");
			scanf ("%f", &num);	
			printf ("La raiz cubica de %f es: %f\n", num, cbrt(num));
			break;
		case 'd':
			printf ("Ingrese un angulo en radianes: ");
			scanf ("%f", &num);	
			printf ("El seno de %f es: %f\nEl coseno es: %f\nLa tangente es: %f\n", num, sin(num), cos(num), tan(num));
			break;
		default:
			printf ("Opcion invalida\n");
			break;
		}
		printf ("¿Desea seguir operando? S/N: ");
		scanf (" %c", &seguir);
	} while(seguir=='s'||seguir=='S');
	return 0;
}

