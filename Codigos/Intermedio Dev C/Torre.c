/*Una torre de control aereo lleva las estadisticas de cada uno de sus 24 controladores, que
trabajan en 4 turnos rotativos de 6hs. Cada controlador puede llevar el control, al final del
dia, de hasta 100 vuelos.Cada vez que un controlador guia el despegue o el aterrizaje de una 
aeronave se genera un reporte. La informacion del reporte indica: El numero de controlador;el
desempeño en ese vuelo puntuado de 1 a 5;si es un aterrizaje (con una letra A) o despegue (con
una letra D); si el destino es local(C) o interacional(I);y, si hubo un incidente, la severidad
del mismo(A,B o C) o si no hubo incidente(O). Los reportes se van generando a medida que 
aterrizan y despegan los distintos vuelos, pudiendo tocar cada uno un controlador cualquiera.
Diseñar un algoritmo que al final del dia:
1-Determine la cantidad de despegues y aterrizajes que realizo cada controlador discriminado
entre vuelos locales e internacionales y que porcetaje representa del total
2-Determine la cantidad de incidentes de cada tipo por cada controlador y que porcentaje
representa el total. Indicar cual fue el mejor rendimiento promedio que haya obtenido el/los
controlador/es de mejor desempeño*/
#include <stdio.h>
#include <conio.h>
struct report{
	int control;
	int desemp;
    char tipo;
    char dest;
	char inci;
}report;
struct datos{
	 int alocal;
    int ainter;
    int dlocal;
    int dinter;
	int incia;
	int incib;
	int incic;
}datos;
void reporte(vec,vec1);
void inicio(vec,vec1);
void aterrizaje(vec,vec1);
void despegue(vec,vec1);
void incidentes(vec,vec1);
struct report vec[24];
struct datos vec1[24];
int main(){
	char rta1;
	prinf("Iniciar programa? Y/N\n");
	scanf("%c",rta1);
	if(rta1==Y){
		inicio(vec);
		reporte(vec,vec1);
		
	}
	else(rta1=N){
		printf("cerrando...");
	}
	else{
		printf("Error");
	}
_getch();
return 0;
}
void inicio(){
	int i;
	for(i=0;i<24;i++);
	vec.desemp=0;
}
void reporte(){
	int rta;
	int i;
	printf("Ingrese su numero de controlador");
	scanf("%d",i);
	vec[i].control=i;
	printf("Aterrizaje:a\nDespegue:d")
	scanf("%c",vec[i].tipo);
	if(vec[i].tipo==a){
		aterrizaje(vec,vec1,i);
		incidentes(vec,vec1,i);
	}
	else(vec[i].tipo==d){
		despegue(vec,vec1,i);
		incidentes(vec,vec1,i);
	}
}
void aterrizaje(){
	printf("ingrese destino (local(c) o interacional(i))");
	scanf("%c",vec[i].dest);
	if(vec[i].dest==c){
	vec1[i].alocal++;
	}
	else(vec[i].dest==a){
	vec1[i].ainter++;
	}
}
void despegue(){
	printf("Ingrese destino (local(c)no internacional(i))");
	scanf("%c",vec[i].dest);
	if(vec[i].dest==c){
		vec1[i].dlocal++;
	}
	else(vec[i].dest==a){
		vec1[i].dinter++;
	}
}
void incidentes(){
	char rta,rta2;
	printf("Hubo incidentes?Y/N\n");
	scanf("%c",rta);
	if(rta==y){
		printf("Que tipo de incidente? A,B,C")
		scanf("%c",rta2);
		if(rta2==a){
			vec[i].inci
			vec1[i].incia++;
		}
		else(rta2==b){
			vec[i].inci
			vec1[i].incib++;
		}
		else(rta2==c){
			vec[i].inci
			vec1[i].incic++;
		}
		else(){
			printf("Error");
		}
	}
	else{
		
	}
	}
	
}

