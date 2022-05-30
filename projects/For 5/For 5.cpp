#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
//Una estación meteorológica en Los Molinos toma la temperatura cada una hora. 
//Luego muestra por día el promedio de la temperatura, la temperatura minina y la temperatura máxima. 
	float temp= 0, sum= 0, temp_me= 0,temp_ma= 0 ;
	int ii= 0;
	
	for (ii=0; ii<24; ii++){
		
		printf ("Ingrese la temperatura a las %dhs: ", ii+1);
		scanf ("%f", &temp);
		sum+=temp;
		if (ii==0){
			temp_ma=temp;
			temp_me=temp;
		}
		else{
			if (temp_ma<=temp){
				temp_ma=temp;
			}
			if (temp_me>=temp){
				temp_me=temp;
			}
		}
		
	}
	printf ("Temperatura minima hoy: %fC°\nTemperatura maxima hoy: %fC°\n", temp_me, temp_ma);
	printf ("La temperatura promedio hoy fue: %fC°", sum/ii);
	return 0;
}

