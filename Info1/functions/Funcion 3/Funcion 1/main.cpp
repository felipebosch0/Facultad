#include<iostream>
using namespace std;
int es_par(int);

int main (int argc, char *argv[]) {
/*1.  Escribir un programa que ingrese un número y llame a una función en 
	la cual determine si un número es o no par. (La función debe devolver el valor)*/
	int num= 0;
	
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &num);
	
	if (num==es_par(num)){
		printf ("Es par");
	}
	else{
		printf ("Es impar");
	}
	return 0;
}

int es_par(int num){
	if (num%2==0){
		return num;
	}
	return 0;
}
