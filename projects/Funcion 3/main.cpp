#include<iostream>
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	void cuadrado(float);
	void rectangulo(float, float);
	void circulo(float);
/*3. Crear un programa con un menú de opciones en la cual calculen las áreas y perímetros de las figuras geométricas. 
	Para cada cálculo implementar una función. (cuadrado, rectángulo, circulo)*/
	char opc= ' ';
	float lado_c= 0, largo_r= 0, alto_r= 0, radio= 0;
	do{
		printf ("AREA Y PERIMETRO\n\n");
		printf ("a)Cuadrado\nb)Rectangulo\nc)Circulo\ne)Cerrar\nElija una opcion: ");
		scanf (" %c", &opc);
		
		switch (opc){
		case 'a':
			printf ("Ingrese un lado del cuadrado: ");
			scanf ("%f", &lado_c);
			cuadrado(lado_c);
			break;
		case 'b':
			printf ("Ingrese el largo del rectangulo: ");
			scanf ("%f", &largo_r);
			printf ("Ingrese alto del rectangulo: ");
			scanf ("%f", &alto_r);
			rectangulo(largo_r, alto_r);
			break;
		case 'c':
			printf ("Ingrese el radio del circulo: ");
			scanf ("%f", &radio);
			circulo(radio);
			break;
		default:
			printf ("Closed");
			break;
		}
	}while(opc=='a'||opc=='b'||opc=='c');
	
	return 0;
}
void cuadrado(float num1){
	float perimetro= 0, area= 0;
	perimetro= num1*4;
	area= num1*num1;
	printf ("Cuadrado\n\nPerimetro: %f\nArea: %f\n", perimetro, area);
}
void rectangulo(float num1, float num2){
	float perimetro= 0, area= 0;
	perimetro= (num1*2)+(num2*2);
	area= num1*num2;
	printf ("RECTANGULO\n\nPerimetro: %f\nArea: %f\n", perimetro, area);
}
	void circulo(float radio){
		float perimetro= 0, area= 0;
		area= 3.14*(radio*radio);
		perimetro= 2*3.14*radio;
		printf ("CIRCULO\n\nPerimetro: %f\nArea: %f\n", perimetro, area);
	}

