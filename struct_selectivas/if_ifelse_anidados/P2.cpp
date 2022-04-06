#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int unid= 0, unid_a= 0;
	printf ("Ingrese la cantidad de unidades de la materia: ");
	scanf ("%d", &unid);
	printf ("Ingrese unidades estudidas: ");
	scanf ("%d", &unid_a);
	
	if (unid_a==unid){
		printf ("EL alumno estudio toda la materia");
	}
	else{
		if (unid_a<unid){
			printf ("Le falta estudiar %d unidad/es", (unid - unid_a));
		}
	}
	return 0;
}

