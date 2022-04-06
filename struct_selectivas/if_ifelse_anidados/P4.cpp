#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	float temp=0;
	printf ("Ingrese la temperatura en grados celsius: ");
	scanf ("%f", &temp);
	
	if (temp>=100){
		printf ("Arriba del punto de ebullicion del agua");
	}
	else{
		printf ("Abajo del punto de ebullicion del agua");
	}
	return 0;
}

