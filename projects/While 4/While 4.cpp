#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	float import= 0, valor= 0;
	char clientes= 0;
	
	while ((clientes!='n')||(clientes!='N')){
		printf ("Ingrese el importe o 0 para finalizar: ");
		scanf ("%f", &valor);
		import+=valor;
		if (valor==0){
			if ((import>=50)&&(import<120)){
				printf ("El total a pagar con el descuento aplicado es: $%f\n", (import*1.15));
				import= import*1.15;
				printf ("¿Mas clientes? S/N: ");
				scanf (" %c", &clientes);
			}
			else{
				if ((import>=120)){
					printf ("El total a pagar con el descuento aplicado es: $%f\n", (import*1.20));
					import= import*1.20;
					printf ("¿Mas clientes? S/N: ");
					scanf (" %c", &clientes);
				}
			}
		}
	}
	printf ("La suma total de todos los importes cobrados es: $%f", import);
	return 0;
}

