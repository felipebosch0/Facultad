#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Elaborar un algoritmo para obtener el resultado del escrutinio en las elecciones de un pueblo. 
//Se han presentado 3 candidatos, considerar la posibilidad del voto en blanco e impugnado. El programa debe mostrar: 
	
  //El orden de los ganadores 1�, 2� y 3� lugar. (por mayor�a simple)
  //Las cantidades de votos que sacaron cada uno, como tambi�n la cantidad de votos en blanco e impugnados.
	int candi1= 0, candi2= 0, candi3= 0, blanco= 0, nulo= 0, opc= 0;
	char seguir= 's';
	
	while (seguir=='s'||seguir=='S'){
		printf ("1)Candidato 1\n2)Candidato 2\n3)Candidato 3\n4)Blanco\n5)Nulo\nSeleccione una opcion: ");
		scanf ("%d", &opc);
		switch (opc){
		case 1:
			candi1++;
			printf ("Voto realizado\n");
			break;
		case 2:
			candi2++;
			printf ("Voto realizado\n");
			break;
		case 3:
			candi3++;
			printf ("Voto realizado\n");
			break;
		case 4:
			blanco++;
			printf ("Voto realizado\n");
			break;
		default:
			nulo++;
			printf ("Voto realizado\n");
			break;
		}
		printf ("�Faltan votantes? S/N: ");
		scanf (" %c", &seguir);
	}
	if (candi1>candi2&&candi2>candi3){
		printf ("1� lugar: candidato 1 con %d votos\n2� lugar: candidato 2 con %d votos\n", candi1, candi2);
		printf ("3� lugar: candidato 3 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi3, blanco, nulo);
	}
	else{
		if (candi1>candi3&&candi3>candi2){
			printf ("1� lugar: candidato 1 con %d votos\n2� lugar: candidato 3 con %d votos\n", candi1, candi3);
			printf ("3� lugar: candidato 2 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi2, blanco, nulo);
		}
		else{
			if (candi2>candi1&&candi1>candi3){
				printf ("1� lugar: candidato 2 con %d votos\n2� lugar: candidato 1 con %d votos\n", candi2, candi1);
				printf ("3� lugar: candidato 3 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi3, blanco, nulo);
			}
			else{
				if (candi2>candi3&&candi3>candi1){
					printf ("1� lugar: candidato 2 con %d votos\n2� lugar: candidato 3 con %d votos\n", candi2, candi3);
					printf ("3� lugar: candidato 1 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi1, blanco, nulo);
				}
				else{
					if (candi3>candi1&&candi1>candi2){
						printf ("1� lugar: candidato 3 con %d votos\n2� lugar: candidato 1 con %d votos\n", candi3, candi1);
						printf ("3� lugar: candidato 2 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi2, blanco, nulo);
					}
					else{
						printf ("1� lugar: candidato 3 con %d votos\n2� lugar: candidato 2 con %d votos\n", candi3, candi2);
						printf ("3� lugar: candidato 1 con %d votos\nVotos en blanco: %d\nVotos nulos: %d", candi1, blanco, nulo);
					}
				}
			}
		}
	}
	return 0;
}

