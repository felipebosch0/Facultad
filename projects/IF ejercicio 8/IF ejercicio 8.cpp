#include<stdio.h>
using namespace std;

int main (int argc, char *argv[]) {
	int students= 0;
	float total_alumno= 0;
	printf ("Ingrese el numero de alumnos que iran al viaje: ");
	scanf ("%d", &students);
	
	if (students>=100){
		total_alumno= (4000 / students + 65);
		printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_alumno,(students * 65 + 4000));
	}
	else{
		if ((students>=50)&&(students<=99)){
			total_alumno= (4000 / students + 70);
			printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_alumno,(students * 70 + 4000));
		}
		else{
			if (students<30){
				total_alumno= (4000 / students + 100);
				printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_alumno,(students * 100 + 4000));
			}
			else{
				total_alumno= (4000 / students + 95);
				printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_alumno,(students * 95 + 4000));
			}
		}
	}
	return 0;
}

