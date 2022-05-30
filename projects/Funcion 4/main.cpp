#include<iostream>
#include<ctime>
using namespace std;
int sumar(int []);
void num_a_letra(int []);


int main (int argc, char *argv[]) {
/*4. Se tiene un arreglo de 10 valores rellenado por defecto o aleatoriamente entre el (65 al 90). 
	Luego generar un menú de opciones con las siguientes funciones:
	
	- sumar todos los valores.
	
	- calcular el promedio. (reutilizar la función anterior)
	
	- trasformar los números en letras.*/	
	
	srand(time(NULL));
	int def[10]={0};
	char opc= ' ';
	float prom= 0;
	for (int ii=0;ii<10;ii++){
		def[ii]= rand() % 25+65;
	}
	do{
		printf ("\na)Sumar todos los valores\nb)Calcular promedio\nc)Tranformar los numeros a letras\nd)Salir\nElija una opcion: ");
		scanf (" %c", &opc);
		
		switch(opc){
		case 'a':
			printf ("\nLa suma es: %d", sumar(def));
			break;
		case 'b':
			prom= (float) sumar(def)/10;
			printf ("\nEl promedio es: %f", prom);
			break;
		case 'c':
			printf ("\n");
			num_a_letra(def);
			break;
		default:
			printf ("\nEl programa fue cerrado");
			break;
		}
	} while(opc=='a'||opc=='b'||opc=='c');
	return 0;
}
int sumar(int def[10]){
	int suma= 0;
	for (int ii=0;ii<10;ii++){
		suma+= def[ii];
	}
	return(suma);
}
void num_a_letra(int def[10]){
	for (int ii=0;ii<10;ii++){
		printf (" %c\t", def[ii]);
	}
}
