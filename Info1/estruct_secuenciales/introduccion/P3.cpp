#include <stdio.h>

// ENUNCIADO:
// Elaborar un algoritmo que solicite el nÃ¹mero de respuestas correctas, incorrectas y en blanco, 
// correspondientes a postulantes y muestre su puntaje final considerando, 
// que por cada respuesta correcta tendrÃ¡ 4 puntos, respuestas incorrectas tendrÃ¡ -1; 
// y respuestas en blanco tendrÃ¡ 0 puntos.

int main(int argc, char *argv[]){
	
	// Inicializamos varibles y aplicamos un type.
	int bla , cor , inc, res = 0;
	
	
	// El usuario ingresa la cantidad de respuestas correctas.
	printf("Ingrese la cantidad de respuestas correctas :");
	// Asignamos la cantidad de respuestas correctas a la variable cor.
	scanf("%d", &cor);
	
	// El usuario ingresa la cantidad de respuestas incorrectas.
	printf("Ingrese la cantidad de respuestas incorrectas :");
	// Asiganamos la cantidad de respuestas incorrectas a la variable inc.
	scanf("%d", &inc);
	
	// El usuario ingresa la cantidad de respuestas en blanco.
	printf("Ingrese la cantidad de repuestas en blanco :");
	// Asiganamos la cantidad de respuestas en blanco a la variable bla.
	scanf("%d", &bla);
	
	// Calculamos la multiplicacion de correctas *4 + incorrectas*-1
    // Asignamos el resultado en la variable res.
	res= cor*4 + inc*-1;
	
    // Mostramos por pantalla el resultado del algoritmo.
	printf("Respuestas correctas: %d.\nRespuestas incorrectas: %d.\nRespuestas en blanco: %d.\nEl puntaje total es: %d.", cor,inc ,bla ,res);		   
		
    return 0;
}