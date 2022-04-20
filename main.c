#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nombres[5][20];
	int edades[5];
	int mayor, menor;
	int Mindice,mindice;
	
	int x;	
	for(x=0;x<=4;x++){
	 printf("¿Cual es tu nombre?\n");
	 scanf("%s",&nombres[x]);
	 printf("¿Cual es tu edad?\n");
	 scanf("%d",&edades[x]);
	}
	mayor=edades[0];
	menor=edades[0];
	
	for(x=1; x<=4; x++){
		if(edades[x]>mayor){
			mayor=edades[x];
			Mindice = x;
	 	}
	 	if(edades[x]<menor){
	 		menor=edades[x];
	 		mindice = x;
		 }
	}
	printf("%s ", nombres[Mindice]);
	printf("%d\n", mayor);
	printf("%s ", nombres[mindice]);
	printf("%d",menor);
		return 0;
}

