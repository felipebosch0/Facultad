#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
/*3.Realice un programa que permita cargar el abecedario en un vector. Luego muestre el abecedario ingresado.*/
	char vec[26]= {0};
	for (int ii=0;ii<26;ii++){
		vec[ii]=ii+65;
	}
	printf ("Abecedario\n");
	for (int jj=0;jj<26;jj++){
		printf("%c ", vec[jj]);
	}
	return 0;
}

