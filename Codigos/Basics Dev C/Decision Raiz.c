/*se desea calcular la raiz de un numero entero. debe verificarse si es mayor o menor, si es
menor, entonces avisar que no existe raiz, si no, imprimir numero y raiz.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int num1;
float num2;
int main(){
	printf("ingrese un numero \n");
	scanf("%d",&num1);
	if(num1>0){
		float num2=sqrt(num1);
		printf("la raiz de %d es %f \2",num1,num2);
	}
		else{
			printf("el numero ingresado es menor y no tiene raiz \n");
		}
	_getch();
	return 0;
}

