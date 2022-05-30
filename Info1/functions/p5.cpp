#include<iostream>
using namespace std;
void efectivo(float);
void credito(float [5][4], float);
void debito(float [5][4]);
int main (int argc, char *argv[]) {
/*5.  (ídem ejercicio anterior) Programe un sistema de facturación, donde emita las facturas de un negocio. 
	Para ello primero deberá cargar los siguientes datos por cada articulo (código, precio unitario y cantidad) 
	en un arreglo (máximo 5 filas)
	
	Codigo	Precio Unitario	Cantidad	Subtotal
	1	4	2	8
	2	2	1	2
	3	1	3	4
	Una vez, cargado todos los artículos en la factura , el programa calculará cada uno de los subtotales y 
	el total del monto a abonar por el cliente. Luego, el sistema solicita que se ingrese la forma de pago 
	(efectivo, débito o tarjeta). Si es efectivo y este no es pago exacto, el programa deberá calcular el vuelto,
	y en el caso de la tarjeta de crédito calcular y sumar el recargo del 5%. Finalmente mostrar la factura.*/
	float fact[5][4]= {0}, precio= 0, cant= 0, sub= 0, total= 0;
	char pago= 0;
	
	for (int ii=0;ii<5;ii++){
		printf ("articulo %d\n", 1+ii);
		for (int jj=0;jj<5;jj++){
			if (jj==0){
				printf ("Codigo del articulo: ");
				scanf ("%f", &fact[ii][jj]);
			}
			if (jj==1){
				printf ("Precio unitario del articulo: ");
				scanf ("%f", &precio);
				fact[ii][jj]= precio;
			}
			if (jj==2){
				printf ("Cantidad de articulos: ");
				scanf ("%f", &cant);
				fact[ii][jj]= cant;
			}
			if (jj==3){
				sub= precio*cant;
				fact[ii][jj]= sub;
				total+= sub;
			}
			if (ii==4&&jj==4){
				fact[ii][jj]= total;
			}
		}
	}
	
	printf ("El total a abonar es: $%f", total);
	printf ("\n\na)Efectivo\nb)Debito\nc)Credito(5 por ciento)\nIngrese forma de pago: ");
	scanf (" %c", &pago);
	switch (pago){
	case 'a':
		efectivo(total);
		break;
	case 'b':
		debito(fact[5][4]);
		break;
	case 'c':
		credito(fact[5][4], total);
		break;
	}	
	return 0;
}
void efectivo(float total){
	float monto= 0;
	printf ("Ingrese monto abonado: $");
	scanf ("%f", &monto);
	printf ("Vuelto: $%f", monto-total);
}
void debito(float fact[5][4]){
	printf ("\nCodigo		Precio Unitario		Cantidad 		Subtotal 		Total\n");
	for (int ii=0;ii<5;ii++){
		printf ("%f 	$%f 	 	%f 		$%f 		$%f\n", fact[ii][0], fact[ii][1], fact[ii][2], fact[ii][3], fact[4][4]) ;  
	}
}
void credito(float fact[5][4], float total){
	printf ("El total sera de: $%f\n", total*1.05);
	printf ("\nCodigo		Precio Unitario		Cantidad 		Subtotal 		Total\n");
	for (int ii=0;ii<5;ii++){
		printf ("%f 	$%f 	 	%f 		$%f 		$%f\n", fact[ii][0], fact[ii][1], fact[ii][2], fact[ii][3], (fact[4][4]*1.05)) ;  
	}
}

