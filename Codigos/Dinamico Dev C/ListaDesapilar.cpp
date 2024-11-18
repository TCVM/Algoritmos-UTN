#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct expediente{
	int cod;
	char cara[15];
	char res[200];
	char org[20];
	char dest[20];
	int cantf;
};
struct lista{
	struct expediente dato;
	struct lista *ps;
	struct lista *pant;
};
struct pila{
	struct expediente dato;
	struct pila *ps;
};
void iniciarlista(struct lista **l);
void buscarmodificareliminar(struct lista **l);
int recursion(struct lista **l,int c);
void desapilaryordenar(struct pila **p,struct lista **l);
int main(){
	struct lista;
	struct expediente e;
	inicializarlista(&l);
	desapilaryordenar(&p,&l);
	int r,c;
	do{
	printf("MENU");
	printf("1)Buscar expendiente");
	printf("2)Informe final");
	printf("0)cerrar");
	scanf("%d",r);
	switch(r){
		case 1:
			buscarmodificareliminar(&l);
		break;
		case 2:
			recursion(&l,c);
			printf("La cantidad fue de %d",&c);
			break;
		default:
			printf("Error");
			break;
	}
}while(r!=0);
return 0;
}
void inicializarlista(struct lista **l){
	*l=0;
}
void desapilaryordenar(struct pila **p, struct lista **l){
	struct pila *des=*p;
	struct lista *act=*l;
	struct lista *aux;
	struct lista *aux2;
	*aux=*des;
	*p=*des->ps;
	free(des);
	while((act!=0)&&(*aux->dato.cod>*act->dato.cod)){
	act=act->ps;
	}
	if((*l==0)||(act->pant==0)){
		*aux=act->pant;
		*l=*aux;
	}
	else{
		aux2=act->pant;
		act->pant=aux;
		aux->ps=act;
		aux->pant=aux2;
		aux2->ps=aux;
	}
}
void buscarmodificareliminar(struct lista **l){
int codigo,r,r2,r3,r4;
struct lista *act;
struct lista *aux;
struct lista *sig;
printf("ingrese codigo de expediente");
scanf("%D",codigo);
if(*l==0){
	printf("lista vacia");
	}
	while((*l!=0)&&(l->dato.cod != cod)){
		*l=l->ps;
	}
	do{
	printf("EXPEDIENTE:\n");
	printf("Codigo:%d",&l->dato.cod);
	printf("Caratula:%s",l->dato.cara);
	printf("Resumen:%s",l->dato.res);
	printf("Origen:%s",l->dato.org);
	printf("Destino:%s",l->dato.dest);
	printf("Folios:%d",%l->dato.cantf);
	printf("Que desea hacer?");
	printf("1)Modificar expediente");
	printf("2)Eliminar expediente");
	printf("0)Volver atras");
	scanf("%d",r);
	if(r==1){
			printf("1)Codigo");
			printf("2)Caratula")			
			printf("3)Resumen");
			printf("4)Origen");
			printf("5)Destino");
			printf("6)Folios")
			scanf("%d",r2);
			switch(r2){
				case 1:
					printf("Ingrese cambio");
					scanf("%d",&l->dato.cod);
				break;
				case 2:
					printf("Ingrese cambio");
					scanf("%d",l->dato.cara);
				break;
				case 3:
					printf("Ingrese cambio");
					scanf("%d",l->dato.res);
				break;
				case 4:
					printf("Ingrese cambio");
					scanf("%d",l->dato.org);
				break;
				case 5:
					printf("Ingrese cambio");
					scanf("%d",l->dato.dest);
				break;
				case 6:
					printf("Ingrese cambio");
					scanf("%d",&l->dato.cantf);
				break;
				default:
					printf("error");
				break;
			}
	}
	if(r==2){
			*act=*l;
			if(act!=0){
				if(act->pant==0){
					*l=(*l)->ps;
					if(*l==0){
					(*l)->pant=0;
					}
				}
				else{
					aux=act->pant;
					aux->ps=act->ps;
					if(act->ps!=0){
						sig=act->ps;
						sig->pant=aux;
					}
				}
				free(act);
				printf("Eliminacion completada");
			}
	}
	else{
		if(r==0);
		printf("cerrando");
	}
}while(r!=0);
}
int recursion(struct lista **l,int c){
		*l=l->ps;
		if((*l->dato.cantf<800)&&(*l->dato.dest=="archivo")){
		c++;
			if((*l==0)||(l->ps==0)){
				return c;
			}
			else{
				return recursion(struct lista **l,int c);
			}
		}	
}

