#include<stdio.h>

int main (int argc, char *argv[]) {
    // inicializacion de variables y aplicarle el type.
	int num= 0;
    // El usuario ingresa un numero del 1 al 7
	printf ("Ingrese un numero del 1 al 7: ");
    // Guardamos ese numero en la variable num
	scanf ("%d", &num);

    // Hacemos un switch con la variable num. 
    // Dependiendo el resultado que arroje, sera en el case que entrara. 
	switch (num){
		case 1:
			printf("El numero %d. corresponde al dia DOMINGO", num);
			break;
		case 2:
			printf("El numero %d. corresponde al dia LUNES", num);
			break;
		case 3:
			printf("El numero %d. corresponde al dia MARTES", num);
			break;
		case 4:
			printf("El numero %d. corresponde al dia MIERCOLES", num);
			break;
		case 5:
			printf("El numero %d. corresponde al dia JUEVES", num);
			break;
		case 6:
			printf("El numero %d. corresponde al dia VIERNES", num);
			break;
		case 7:
			printf("El numero %d. corresponde al dia SABADO", num);
			break;
	}

	return 0;
}