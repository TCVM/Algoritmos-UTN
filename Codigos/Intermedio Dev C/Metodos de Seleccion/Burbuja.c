#include <stdio.h>
#include <conio.h>
int main(){
	int array[5]={3,2,1,4,5};
	int i,j,aux;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
			}
		}
	}
for(i=0;i<5;i++){
		printf("%d",array[i]);
}

getch();
return 0;
}
