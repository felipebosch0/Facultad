#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	/*un trabajador quiere saber cu�l ser� su sueldo semanal, se sabe que si trabaja 40 horas o menos, se le pagar� $20 por hora, 
	pero si trabaja m�s de 40 horas entonces las horas extras se le pagar�n a $25 por hora.*/
	
	int hours= 0,sueldo= 0;
	printf ("Ingrese horas trabajadas: ");
	scanf ("%d", &hours);
	
	if (hours<=40){
		printf ("El sueldo sera de $%d", (hours*20));
	}
	else{
		sueldo= ((hours-40)*25) + (40 * 20);
		printf ("El sueldo sera de $%d", sueldo);
	}
	return 0;
}

