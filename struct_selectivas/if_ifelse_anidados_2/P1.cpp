#include <stdio.h> 

// Escriba un programa que pida dos números enteros y que calcule su división, escribiendo si la división es exacta o no. 
// Tener en cuenta que no se puede dividir por cero.
int main(int argc, char *argv[]) {
    // Declaracion de variables 
    int n1 = 0 , n2 = 0; float result = 0;
    
    // Primer numero.
    printf("ingrese el primer numero");

    // Asigno a una variable    
    scanf("%d", &n1);
    
    // Segundo numero.
    printf("ingrese el segundo numero");
    // Asigno a una variable
    scanf("%d", &n2);

    // calc
    result = (n1 % n2);

    // si n1 o n2 es 0 corta el programa
    if (n1 == 0 || n2 == 0){
        printf("No se puede dividir un numero por cero");
    }
    else {
        if (result == 0){
            printf("El resultado de la resta de %d y %d es exacta", n1, n2);
        }
        else{
            printf("El resultado de la resta de %d y %d tiene resto",n1 ,n2);


        }
    }
    return 0;
}
	