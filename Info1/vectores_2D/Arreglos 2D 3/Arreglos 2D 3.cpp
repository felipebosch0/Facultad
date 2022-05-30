#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*3. Programe un sistema de facturación, donde emita las facturas de un negocio. 
	
	Para ello primero deberá cargar los siguientes datos por cada articulo (código, precio unitario y cantidad) 
	en un arreglo (máximo 5 filas)
	
	Codigo	Precio Unitario	Cantidad	Subtotal
	1	           4	       2	     8
	2	           2	       1	     2
	3	           1	       3	     3
	
	
	Una vez, cargado todos los artículos en la factura , el programa calculará cada uno de los subtotales y 
	el total del monto a abonar por el cliente. Luego, el sistema solicita que se ingrese la forma de pago 
	(efectivo, débito o tarjeta). Si es efectivo y este no es pago exacto, el programa deberá calcular el vuelto, 
	y en el caso de la tarjeta de crédito calcular y sumar el recargo del 5%. Finalmente mostrar la factura.*/

	float fact[5][4]= {0}, precio= 0, cant= 0, sub= 0, total= 0, monto= 0;
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
		printf ("Ingrese monto abonado: $");
		scanf ("%f", &monto);
		printf ("Vuelto: $%f", monto-total);
		break;
	case 'b':
		printf ("\nCodigo		Precio Unitario		Cantidad 		Subtotal 		Total\n");
		for (int ii=0;ii<5;ii++){
			printf ("%f 	$%f 	 	%f 		$%f 		$%f\n", fact[ii][0], fact[ii][1], fact[ii][2], fact[ii][3], fact[4][4]) ;  
		}
		break;
	case 'c':
		printf ("El total sera de: $%f\n", total*1.05);
		printf ("\nCodigo		Precio Unitario		Cantidad 		Subtotal 		Total\n");
		for (int ii=0;ii<5;ii++){
			printf ("%f 	$%f 	 	%f 		$%f 		$%f\n", fact[ii][0], fact[ii][1], fact[ii][2], fact[ii][3], (fact[4][4]*1.05)) ;  
		}
		break;
	}	
	return 0;
}

