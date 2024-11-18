#include <stdio.h>
#include <conio.h>
struct persona{
	char apellido[15];
	char nombre[15];
	int dni;
}p;
int main(){
	printf("ingrese su apellido\n");
	gets(p.apellido);
	printf("Ingrese su nombre\n");
	gets(p.nombre);
	printf("Ingrese su DNI\n");
	scanf("%i",&p.dni);
	printf("Usted es %s,%s y su DNI es %i",p.apellido, p.nombre,p.dni);
	return 0;
}
