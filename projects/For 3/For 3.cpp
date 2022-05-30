#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano. 
//Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. 
//Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
	int cant= 0, ii= 0, primer= 0, segundo= 0, tercer= 0, cuarto= 0, cero= 0;
	float x= 0, y= 0;
	printf ("Cantidad de puntos a procesar: ");
	scanf ("%d", &cant);
	
	for (ii=0; ii<cant; ii++){
		printf ("Ingresar coordenada X: ");
		scanf ("%f", &x);
		printf ("Ingresar coordenada Y: ");
		scanf ("%f", &y);
		if ((x>0)&&(y>0)){
			primer++;
		}
		else{
			if ((x<0)&&(y>0)){
				segundo++;
			}
			else{
				if ((x<0)&&(y<0)){
					tercer++;
				}
				else{
					if ((x>0)&&(y<0)){
						cuarto++;
					}
					else{
						cero++;
					}
				}
			}
		}
	}
	printf ("La cantidad de puntos ingresados en los cuadrante fueron:\n");
	printf ("Primer cuadrante: %d\nSegundo cuandrante: %d\nTercer cuadrante: %d\n", primer, segundo, tercer);
	printf ("Cuarto cuadrante: %d\nNo pertenece a ningun cuadrante: %d", cuarto, cero);
	return 0;
}

