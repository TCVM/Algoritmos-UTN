#include <stdio.h>
int main(){
	int numero=50;
	int *p_numero;
	p_numero=&numero;
	printf("valor de la variable\n");
	printf("dato: %i",numero);
	printf("\nDato:%i",*p_numero);
	printf("\n\nPosicion de memoria:\n");
	printf("posicion:%p",&numero);
	printf("\nposicion:%p",p_numero);
	return 0;
}
