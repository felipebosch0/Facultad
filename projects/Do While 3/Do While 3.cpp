#include <iostream>
#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {
/*3. Un estudiante esta aprendiendo las tablas de multiplicar del 1 al 10,
	entonces realice un programa que obtenga dos n�meros aleatorios entre el 1 y 10 y as� compone una multiplicaci�n. 
	Luego el estudiante ingresa el resultado, y el programa deber� evaluar si es correcto o no. 
	En caso de que sea incorrecto brindar la soluci�n. Despu�s el programa preguntara si desea seguir practicando. 
	Si el estudiante responde Si 'S' el programa genera otro calculo, en caso de que diga que No 'N' 
	se dar� por terminada la sesi�n de preguntas y mostrara la cantidad de preguntas en total y cuantas respuestas fueron correctas. */
	int num1= 0, num2= 0, res= 0, correctas= 0, preg= 0;
	char seguir= 's';
	
	do{
	srand(time(NULL)); //Funcion para generar numeros random
	num1= rand() % 10;//hasta+1
	num2= rand() % 10;
	printf ("%d x %d\nIngrese la respuesta: ", num1, num2);
	scanf ("%d", &res);
	preg++;
	if (res==(num1*num2)){
		correctas++;
	}
	else{
		printf ("INCORRECTO!\nLa solucion era: %d\n", num1*num2);
	}
	printf ("Desea seguir practicando? S/N: ");
	scanf (" %c", &seguir);
	}while (seguir== 's');
	printf ("Cantidad de preguntas: %d\nRespuestas correctas: %d", preg, correctas);
	return 0;
}

