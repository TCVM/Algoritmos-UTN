// MyInclud.h
#ifndef MYINCLUD_H
#define MYINCLUD_H
#include <stdio.h>
#include <conio.h>
char nombre [15];
char apellido [15];
int main(){
printf("ingrese su nombre \n");
scanf("%c",nombre);
printf("ingrese su apellido \n");
scanf("%c",apellido);
printf("¿su nombre completo es:%c %c?",nombre,apellido);
getchar();
return 0;
}
#endif // MYINCLUD_H
