

#include <stdio.h>
#include <conio.h>
void intercam (float *para1, float *para2);
int main(){
	float x,y,z;
	printf("ingrese 2 numeros\n");
	scanf("%f,%f",&x,&y);
	printf("valores originales:%f,%f\n",x,y);
	intercam(&x,&y);
	printf("valores intercambiados:%f,%f\n",x,y);
	_getch();
	return 0;
}
void intercam(float *x, float *y){
	float aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
