/*En un club, cada socio tiene un numero (de 0 a 900) y un valor de catergoria que puede ser:
menor, juvenil, o mayor. La comision directiva definio sore el valor de la cuota un descuento
del 10% para los socios juveniles y del 50% para los socios mayores, cuyo numero de socio sea
menor de 200.
informar el descuento obtenido por un socio de acuerdo a su situacion*/
#include <stdio.h>
#include <conio.h>
int numsoc;
int categ;
float cuota;
float prom;
int main(){
	printf("igresar numero de socio");
	scanf("%d",numsoc);
	if(numsoc<=900){
	printf("ingrese categoria");
	scanf("%d",categ);
	Printf("ingrese valor de la cuota");
	scanf("%f",cuota);
	switch(categ){
		case 1:
			prom=((10/cuota)*100);
			printf("Su cuota final es de %f",prom);
		break;
		case 2:
			printf("No hay cambios");
		case 3:
			if(numsoc<200){
				prom=((50/cuota)*100);
				printf("Su cuota final es de %f",prom);
			}
			else{
				printf("No hay cambios");		
			}
		break;
		default:
		    printf("Categoria erronea");
		break;
	}
}
else{
	printf("Numero de socio erroneo");
}
_getch();
return 0;
}

