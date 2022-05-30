#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	float nota= 0, mayor= 0, menor= 0, sum= 0, promedio= 0, nota_ma= 0, nota_me= 0;
	int aprob= 0, desaprob= 0, counter= 0;
	char opcion= 0;	
	printf ("Ingrese la nota: ");
	scanf ("%f", &nota);
	nota_ma= nota_me= nota;
	
	while (nota!=0){
		sum+= nota;
		counter++;
		if (nota_ma<=nota){
			nota_ma=nota;
			mayor= nota_ma;
		}
		if (nota_me>=nota){
			nota_me= nota;
			menor=nota_me;
		}
		if (nota>=4){
			aprob++;
		}
		else{
			desaprob++;
		}
		printf ("Ingrese la nota o 0 para salir: ");
		scanf ("%f", &nota);
	}
	promedio= sum/counter;
	printf ("a)Nota mayor y menor\nb)Cantidad de evaluaciones aprobadas y desaprobadas\nc)Promedio\n");
	scanf (" %c", &opcion);
	while (opcion!='d'){
		switch (opcion){
		case 'a':
			printf ("Nota mayor: %f\nNota menor: %f\n", mayor, menor);
			break;
		case 'b':
			printf ("Evaluaciones\nAprobadas: %d\nDesaprobadas: %d\n", aprob, desaprob);
			break;
		case 'c':
			printf ("Promedio: %f\n", promedio);
			break;
		default:
			printf ("ERROR\n");
			opcion=0;
			break;
		}
		printf ("a)Nota mayor y menor\nb)Cantidad de evaluaciones aprobadas y desaprobadas\nc)Promedio\nd)Cerrar\n");
		scanf (" %c", &opcion);
	}
	return 0;
}

