/*En una ferreteria se quiere simular la venta generando el ticket y actualizando el stock.Se
cuenta con 50 productos, cada uno con su nombre, stock y precio unitario.
Por cada venta se solicita el nombre y cantidad a vender. Si el stock no es suficiente se debera
mostrar un mensaje, caso contrario, actualizar stock y generar el ticket de venta imprimiendo: 
nombre, cantidad vendida y precio total*/
#include <stdio.h>
struct productos{
	char nombre[15];
	int stock;
	float preciou;
}p;
void cargainicial();
struct productos vecini[50];
int main (){
	int i;
	char producto;
	int rta;
	int cantv;
	float preciototal;
	rta=0;
	cargainicial(vecini);
	do{
		printf("ingrese nombre del producto\n");
		scanf("%c",producto);
		for(i=0;i<50;i++){
			if(producto==vecini[i].nombre){
			printf("Ingrese cantidad\n");
			scanf("%d",cantv);
			if(cantv<vecini[i].stock)
			vecini[i].stock=vecini[i].stock-cantv;
			preciototal=cantv*vecini[i].preciou;
			printf("----------------\nNombre:%s\nCantidad:%i\nPrecio Total:%.xf,x\n--------------",vecini[i].nombre,cantv,preciototal);
			}
		}
	printf("cerrar el dia? 1/0 \n");
	scanf("%c",rta);	
	}while(rta==0);	
}
void cargainicial(){
	int i;
	for(i=0;i<50;i++){
		printf("Ingrese nombre del producto\n");
		gets(vecini[i].nombre);
		printf("Ingrese stock del producto\n");
		scanf("%i",&vecini[i].stock);
		printf("Ingrese el precio del producto\n");
		scanf("%f",&vecini[i].preciou);
	}
}
