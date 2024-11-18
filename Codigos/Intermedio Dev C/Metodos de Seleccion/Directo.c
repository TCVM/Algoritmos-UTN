/*Por cada pasada busca el minimo elemento comparado con el resto de los elementos y luego lo
reubica en las primeras posiciones del vector*/
#include <stdio.h>
int main(){
	int vec[5]={4,3,1,5,2};
	int i,j,aux,min;
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(vec[j]<vec[min]){
				min=j;
			}
		}
		aux=vec[i];
		vec[i]=vec[min];
		vec[min]=aux;
	}
	printf("ascendete\n");
	for(i=0;i<5;i++){
		printf("%d",vec[i]);
	}
return 0;
}
