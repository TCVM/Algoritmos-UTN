#include <stdio.h>
int factorial(int n);

int main(){
	int numero;
	printf("Digite un numero\n");
	scanf("%d",&numero);
	printf("El factorial es %d\n",factorial(numero));
	return 0;
}
int factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
}
