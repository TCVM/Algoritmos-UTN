/*Escribir un algoritmo que entreviste a 15 personas y seleccione las que son mayores de 20
años. Imprimir el total seleccionado*/
#include <stdio.h>
#include <conio.h>
int i;
int cont;
int edad;
char nombre [15];
int main(){
	for(i=1;i<=15;i++){
		printf("Ingrese su nombre \n");
		scanf("%s",nombre);
		printf("Ingrese su edad \n");
		scanf("%d",&edad);
		if(edad>=20){
			cont++;
		}
	}
	printf("El total seleccionado es %d",cont);
	_getch();
	return 0;
}
