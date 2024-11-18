#include <stdio.h>
#include <conio.h>
int main(){
	int vec[5]={3,4,1,5,2};
	int i,pos,aux;
	for(i=0;i<5;i++){
		pos=i;
		aux=vec[i];
		while((pos>0)&&(aux<vec[pos-1])){
			vec[pos]=vec[pos-1];
			pos--;
		}
		vec[pos]=aux;
	}
	for(i=0;i<5;i++){
	printf("%d",vec[i]);
	}
getch();
return 0;
}
