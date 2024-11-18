/*Se quiere simular el proceso de llenado de un tanque de agua. Para ello se lee cual es la
capacidad del mismo, y la cantidad de agua con la que se carga cada balde a volcar dentro del
tanque. Elproceso de volcar baldes de agua dentro del tanque se repite mientras no se haya
llenado el tanque. Se desea conocer la cantidad total de baldes volcados. La cantidad del 
tanque y la cantidad de agua de cada balde son enteros de 3 y 2 cifras respectivamente*/
#include <stdio.h>
#include <conio.h>
float capT;
float aguaV;
float aguaT;
int cont;
int main(){
	aguaT=0;
	cont=0;
    printf("Ingrese capacidad del tanque\n");
	scanf("%f",&capT);
    while(aguaT<capT){
    	printf("ingrese cantidad de agua a volcar\n");
    	scanf("%f",&aguaV);
    	aguaT=aguaT+aguaV;
    	cont++;
    	printf("Cantidad actual de agua en el tanque:%f\n",aguaT);
	}	
	printf("Cantidad de valdes volcados:%d, cantidad final de agua en el tanque:%f\n",cont,aguaT);
	_getch();
	return 0;
}
