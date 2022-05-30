#include<iostream>
#include<ctime>
using namespace std;

int main (int argc, char *argv[]) {
/*2. Crear un programa que arme un arreglo de 5x5 de números aleatorios pares. 
	Luego muestre el arreglo resultante.*/
	int pares[5][5]= {0}, num= 0;
	srand(time(NULL));
	for (int ii=0;ii<5;ii++){
		for (int jj=0;jj<5;jj++){
			num= rand() % 100;
			if (num%2==0){
			pares[ii][jj]= num;
			}
			else{
				jj+= -1;
			}
		}
	}
	for (int ii=0;ii<5;ii++){
		for (int jj=0;jj<5;jj++){
			
			printf ("%d - ", pares[ii][jj]);
		}
	}
	return 0;
}

