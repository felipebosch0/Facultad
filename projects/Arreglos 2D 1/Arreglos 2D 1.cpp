#include<iostream>
#include<ctime>
using namespace std;

int main (int argc, char *argv[]) {
/*1. Desarrollar un algoritmo que arme un arreglo de 10x10 de números aleatorios. 
	Una vez cargado el arreglo, el programa deberá mostrar un menú de opciones: 
	
	a.  calcular el promedio.
	
	b.  solicitar un numero y buscar cuantas veces esta ese numero en el arreglo.
	
	c. mostrar solo los valores pares
	
	d. mostrar todos los valores. */
	
	int vec[10][10]= {0}, num= 0, sum= 0, num1=0, cont_num= 0;
	float prom= 0;
	char opcion= ' ', seguir= ' ';
	srand(time(NULL));
	
	for (int ii=0;ii<10;ii++){
		for (int jj=0;jj<10;jj++){
			num= rand() % 100;
			vec[ii][jj]= num;
			sum+= num;
		}
	
	}
	do{
	printf ("a)Calcular promedio\nb)Solicitar un numero y buscar cuantas veces esta ese numero en el arreglo\n");
	printf ("c)Mostrar solo los valores pares\nd)Mostrar todos los valores\nElija una opcion: ");
	scanf (" %c", &opcion);
	
	switch (opcion){
	case 'a':
		prom= sum/100;
		printf ("El promedio es: %f", prom);
		break;
	case 'b':
		printf ("Solicite un numero: ");
		scanf ("%d", &num1);
		for (int ii=0;ii<10;ii++){
			for (int jj=0;jj<10;jj++){
				if (vec[ii][jj]==num1){
					cont_num++;
				}
			}
		}
		printf ("El numero se encuentra %d veces en el arreglo", cont_num);
		break;
	case 'c':
		for (int ii=0;ii<10;ii++){
			for (int jj=0;jj<10;jj++){
				if (vec[ii][jj]%2==0){
					printf ("%d - ", vec[ii][jj]);
				}
			}
		}
		break;
	case 'd':
		for (int ii=0;ii<10;ii++){
			for (int jj=0;jj<10;jj++){
				
				printf ("%d - ", vec[ii][jj]);
			}
		}
		break;
	default:
		printf ("Opcion Invalida");
		break;
	}
	printf ("\nDesea seguir s/n: ");
	scanf (" %c", &seguir);
	}while(seguir!='s'||seguir!='S');
	return 0;
}

