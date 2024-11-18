#include <stdio.h>
#include <conio.h>
int vecnum [5],i;
int main(){
	for(i=0;i<5;i++){
		vecnum[i]=0;
	}
	for(i=0;i<5;i++){
		printf("vector posicion:%d\n",i);
		printf("ingrese valor entero:");
		scanf("%d",&vecnum[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",vecnum[i]);
	return 0;
}
}
