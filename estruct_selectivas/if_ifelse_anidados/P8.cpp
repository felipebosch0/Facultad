#include<stdio.h>
using namespace std;

// ENUNCIADO:
// El director de una escuela esta organizando un viaje de estudios. 
// La compañía viajes cobra de la siguiente manera de acuerdo a la cantidad de alumnos que vayan:

// Cantidad de alumnos	Precio por Alumno
//	Mas de 100				$65
// 	de 50 a 99				$70
// 	de 30 a 49				$95
// 	menos de 30				$100

int main (int argc, char *argv[]) {
	// inicializamos varibales
	int stds= 0; float total_stds= 0;
	
	// input de el numero de alumnos
	printf ("Ingrese el numero de alumnos que iran al viaje: ");
	// asignamos lo ingresado a una variable
	scanf ("%d", &stds);
	
	// condicion
	if (stds>=100){
		// calculos
		total_stds= (4000 / stds + 65);
		// mostramos
		printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_stds,(stds * 65 + 4000));
	}
	// si no se cumple la condicion
	else{
		// creamos una nueva condicion
		if ((stds>=50)&&(stds<=99)){
			// calculos
			total_stds= (4000 / stds + 70);
			// mostramos
			printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_stds,(stds * 70 + 4000));
		}
		// si no se cumple la nueva condicion
		else{
			// creamos una tercer condicion
			if (stds<30){
				// calculos
				total_stds= (4000 / stds + 100);
				// mostramos
				printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_stds,(stds * 100 + 4000));
			}
			// si no se cumple la tercer condicion
			else{
				// calculos
				total_stds= (4000 / stds + 95);
				// mostramos
				printf ("El total a abonar por cada alumno es de: $%f \nEl director tendra que entregar: $%d", total_stds,(stds * 95 + 4000));
			}
		}
	}
	return 0;
}

