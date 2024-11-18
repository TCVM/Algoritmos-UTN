#include <stdio.h>
#include <stdlib.h>
struct nodo{
	char nombre[20];
	char apellido[20];
	int DNI;
	struct nodo *psig;
};
struct nodo *primero=NULL;
struct nodo *ultimo=NULL;
void insertarnodo(struct nodo *n){
	struct nodo *nuevo;
	n->psig=NULL;
	if(primero==NULL){
	primero=nuevo;
	primero->psig;
	ultimo=nuevo;
	}
	else{
		ultimo->psig=n;
		ultimo=n;
	}
}
int main(){
	struct nodo *nuevo=malloc(sizeof(struct nodo));
	printf("Ingrese su nombre:\n");
	gets(nuevo->nombre);
	printf("Ingrese su apellido:\n");
	gets(nuevo->apellido);
	printf("Ingrese su DNI:\n");
	scanf("%d",nuevo->DNI);
	printf("%s",nuevo->nombre);
	printf("%s",nuevo->apellido);
	printf("%d",nuevo->DNI);
	return 0;
}

