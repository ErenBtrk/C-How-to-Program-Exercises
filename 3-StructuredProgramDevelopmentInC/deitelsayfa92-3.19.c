#include <stdio.h>
#include <conio.h>


int main(){
	float satis,maas;
		while(satis!=-1){
		printf("dolar cinsinden satis tutarini giriniz:");
		scanf("%f",&satis);
			if(satis==-1){
			printf("cikis yaptiniz.");
			break;
		}
			else{
				maas=satis*0.09+200;
				printf("Maas:%.2f$\n",maas);
			}
		}
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
