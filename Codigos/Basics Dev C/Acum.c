/*escribir un algoritmo que entreviste a 15 personas y seleccione las que son mayores a 20 años
Imprimir la edad promedio de los aspirantes*/
#include <stdio.h>
#include <conio.h>
int acum;
int cont;
int cont2;
int edad;
float prom;
int i;
char nombre [15];
int main(){
for(i=1;i<=15;i++){
printf("ingrese su nombre \n");
scanf("%s",nombre);
printf("ingrese su edad \n");
scanf("%d",&edad);
if(edad>=20){
	cont2=cont2++;
	acum=acum+edad;
}
cont++;
}
prom=acum/cont;
printf("El promedio es %f",prom);
_getch();
return 0;
}
