#include <stdio.h>
#include <conio.h>
char nombre [15];
char apellido [15];
int main(){
printf("ingrese su nombre \n");
scanf("%s",nombre);
printf("ingrese su apellido \n");
scanf("%s",apellido);
printf("¿su nombre completo es:%s,%s?",nombre,apellido);
return 0;
}
