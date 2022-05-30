#include<iostream>
using namespace std;
void sumar(float,float);
void restar(float,float);
void multiplicar(float,float);
void dividir(float,float);
int main (int argc, char *argv[]) {
/*2. Realizar un programa que simule una calculadora. 
	El mismo debe contener un menú de opciones con las distintas operaciones que puede realizar. 
	Las operaciones deben ser programadas utilizando funciones. (del tipo void)
	
	a. Sumar dos números.
	
	b. Restar dos números.
	
	c. Multiplicar dos números.
	
	d. Dividir dos números. */
	char opc= ' ';
	float num1= 0, num2= 0;
	do{
		printf ("CALCULADORA\n\n");
		printf ("Operaciones con dos numeros\n");
		printf ("a)Sumar\nb)Restar\nc)Multiplicar\nd)Dividir\ne)Cerrar\nElija una opcion: ");
		scanf (" %c", &opc);
		
		switch (opc){
		case 'a':
			sumar(num1, num2);
			break;
		case 'b':
			restar(num1, num2);
			break;
		case 'c':
			multiplicar(num1, num2);
			break;
		case 'd':
			dividir(num1, num2);
			break;
		default:
			printf ("Closed");
			break;
		}
	}while(opc=='a'||opc=='b'||opc=='c'||opc=='d');
	return 0;
}
void sumar(float num1, float num2){
	float suma= 0;
	printf ("Ingrese dos numeros:\n");
	scanf ("%f%f", &num1, &num2);
	suma= num1+num2;
	printf ("%f + %f = %f\n", num1, num2, suma);
}
void restar(float num1, float num2){
	float resta= 0;
	printf ("Ingrese dos numeros:\n");
	scanf ("%f%f", &num1, &num2);
	resta= num1-num2;
	printf ("%f - %f = %f\n", num1, num2, resta);
}
void multiplicar(float num1, float num2){
	float mult= 0;
	printf ("Ingrese dos numeros:\n");
	scanf ("%f%f", &num1, &num2);
	mult= num1*num2;
	printf ("%f x %f = %f\n", num1, num2, mult);
}
void dividir(float num1, float num2){
	float div= 0;
	printf ("Ingrese dos numeros:\n");
	scanf ("%f%f", &num1, &num2);
	div= num1/num2;
	printf ("%f / %f = %f\n", num1, num2, div);
}
