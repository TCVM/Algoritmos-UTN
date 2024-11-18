#include <stdio.h>
#include <conio.h>
int sumar();
int main(){
	int a,b,suma=0;
	print("\nIngrese dos numeros\n");
	scanf("%d %d",&a,&b);
	suma=sumar(a,b);
	return 0;
}
int sumar(int n1,int n2){
	int suma=0;
	suma=n1+n2;
	return suma;
}
