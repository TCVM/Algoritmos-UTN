#include <stdio.h>
#include <conio.h>
int *arreglodearreglos[3];
int arreglo1[3]={1,2,3};
int arreglo2[3]={4,5,6};
int *punteroaarreglo;
arreglodearreglos[0]=arreglo1;
arreglodearreglos[1]=arreglo2;
arreglodearreglos[2]=arreglo3;
int main(){
	int i;
	int j;
	for(i=0;i<3;i++){
		printf("Arreglo:%d\n",i+1);
		punteroaarreglo=arreglodearreglos[i];
		for(j=0;j<3;j++){
			printf("posicion:%d-valor:%d\n",j+1,arreglodearreglos[j]);
			_getch();
		}
		_clrscr();
	}
}
