#include <stdio.h>
#include <conio.h>
int day;
int month;
int main(){
	printf("ingrese mes\n");
	scanf("%d",&month);
	switch(month){
	case 1:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=31){
	             printf("la fecha introducida es %d de enero del año 2019",day);
            }
            else{
		      printf("dia inexistente");
	        }
	break;
	case 2:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
		    if(day>0 && day<=28){
            	printf("la fecha introducida es %d de febrero del año 2019",day);
            }
            else{
		      printf("dia inexistente");
            }
	break;
	case 3:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=31){
	            printf("la fecha introducida es %d de marzo del año 2019",day);
            }
            else{
    		  printf("dia inexistente\n");
	        }
	break;
	case 4:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
		    if(day>0 && day<=30){
	            printf("la fecha introducida es %d de abril del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 5:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
		    if(day>0 && day<=31){
	            printf("la fecha introducida es %d de mayo del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 6:
			printf("ingrese numero de dia\n");
            scanf("%d",&day);
	        if(day>0 && day<=30){
	            printf("la fecha introducida es %d de junio del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 7:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
		    if(day>0 && day<=31){
	            printf("la fecha introducida es %d de julio del año 2019",day);
            }
            else{
    		  printf("dia inexistente");
	        }
	break;
	case 8:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
		    if(day>0 && day<=31){
	            printf("la fecha introducida es %d de agosto del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 9:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=30){
	            printf("la fecha introducida es %d de septiembre del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 10:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=31){
	            printf("la fecha introducida es %d de octubre del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 11:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=31){
	            printf("la fecha introducida es %d de noviembre del año 2019",day);
            }
            else{
    	      printf("dia inexistente");
	        }
	break;
	case 12:
			printf("ingrese numero de dia\n");
	        scanf("%d",&day);
	        if(day>0 && day<=31){
	            printf("la fecha introducida es %d de diciembre del año 2019",day);
            }
            else{
	          printf("dia inexistente");
            }
	break;
	default:
		printf("mes inexistente");
    break;
	}
_getch();
return 0;
}
