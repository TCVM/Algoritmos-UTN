/*Quiero una lista doblemente enlazada que tenga el nombre, edad y DNI de cada persona que llegue en el transcurso
del dia y quiero que sean ordenadas por DNI*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct registro{
	char nombre[15];
	int edad;
	int DNI;
};
struct lista{
	struct registro dato;
	struct lista *psig;
	struct lista *pant;
};

void iniciarlista(struct lista **l);
void cargadatos(struct registro *d,int dni);
void insertarordenado(struct lista **l,struct registro d);
void buscarlista(struct lista *l);

int main(){
int r,dn;
struct lista *l;
struct registro d;
iniciarlista(&l);
do{
	printf("MENU\n");
	printf("------------\n");
	printf("1)Agregar perfil\n");
	printf("2)Ver lista\n");
	printf("0)cerrar\n");
	scanf("%d",&r);
	switch(r){
		case 1:
			dn=-1;
			cargadatos(&d,dn);
			insertarordenado(&l,d);
		break;
		case 2:
			buscarlista(l);
		break;
		default:
			printf("error");
		break;
	}
}while(r=!0);	
return 0;
}
void iniciarlista (struct lista **l){
	*l=0;
}
void insertarordenado(struct lista **l,struct registro d){
	struct lista *nuevo=malloc(sizeof(struct lista));
	struct lista *aux;
	struct lista *act;
	nuevo->dato=d;
	act=*l;
	while((act != 0) && (act->dato.DNI < nuevo->dato.DNI)){
		act=act->psig;
	}
	if((*l==0)||(act->pant)){
		nuevo->pant=0;
		nuevo->psig=*l;
		*l=nuevo;
	}
	else{
		aux=act->pant;
		nuevo->pant=aux;
		act->pant=nuevo;
		nuevo->psig=act;
		aux->psig=nuevo;
	}
}
void cargadatos(struct registro *d,int dn){
	if(dn==-1){
		printf("Ingrese DNI\n");
		scanf("%d",&d->DNI);
	}
	else{
		d->DNI=dn;
	}
	printf("Ingrese su nombre\n");
	scanf("%s",d->nombre);
	printf("Ingrese su edad\n");
	scanf("%d",&d->edad);
}
void buscarlista(struct lista *l){
	int dn;
	if(l==0){
		printf("Lista vacia");
	}
	else{
		printf("Ingrese DNI\n");
		scanf("%d",&dn);
		while((l!=0) && (l->dato.DNI != dn)){
		l=l->psig;
		}
		if(l==0){
			printf("No se encontro registro");
		}
		else{
			printf("nombre %s\n", l->dato.nombre);
			printf("edad %d\n", l->dato.edad);
			printf("DNI %d\n",l->dato.DNI);
			_getch();
		}
	}
}	
