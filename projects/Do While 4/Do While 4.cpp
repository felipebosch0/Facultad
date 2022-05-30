#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//4. Un circo desea agilizar los tiempos de espera de los clientes para la compra de entradas, 
//para ello, se le solicita que elabore un programa de venta de ticket de entradas. 
//El programa debe solicitar al usuario que ingrese todas las edades del grupo familiar, 
//hasta que ingrese cero (0), luego calcular y mostrar el monto total a pagar, de acuerdo a los siguientes precios: 
	
	//Menores de 5 años gratis.
	//Entre 5 y 15 años inclusive $20.
	//Mayores de 15 años $40.
	int edad= 0, total= 0;
	
	do{
		printf ("Ingrese la edad o 0 para calcular el monto: ");
		scanf ("%d", & edad);
		
		if (edad<5){
			total+=0;
		}
		if (edad>=5&&edad<15){
			total+=20;
		}
		if(edad>=15){
			total+=40;
		}
	} while(edad!=0);
	printf ("El monto total a pagar es de: $%d", total);
	return 0;
}

