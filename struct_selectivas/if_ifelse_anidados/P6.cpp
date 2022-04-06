#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float lad1= 0, lad2= 0, lad3= 0;
	printf ("Ingrese los lados del triangulo:\n");
	scanf ("%f%f%f", &lad1, &lad2, &lad3);
	
	if ((lad1==lad2)&&(lad1==lad3)&&(lad2==lad3)){
		printf ("Triangulo equilatero");
	}
	else{
		if ((lad1!=lad2)&&(lad1!=lad3)&&(lad2!=lad3)){
			printf ("Triangulo escaleno");
		}
		else{
			printf ("Trinagulo isosceles");
		}
	}
	return 0;
}

