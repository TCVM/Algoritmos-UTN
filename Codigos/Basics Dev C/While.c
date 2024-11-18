/*ingresar una sucesion de nmeros que finaliza con el 0, para obetener e imprimir su suma*/
#include <stdio.h>
#include <conio.h>
int s;
int num;
int main(){
	s=1;
	printf("Ingrese numero\n");
		scanf("%d",&num);
		while(s!=20){
		s=s+num;
		printf("La suma da %d\n",s);
	}
	_getch();
	return 0;
}
