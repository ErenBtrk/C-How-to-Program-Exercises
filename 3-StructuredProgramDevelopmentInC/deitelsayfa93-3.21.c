#include <stdio.h>
#include <conio.h>


int main(){
	int saat;
	float ucret,maas;
		while(saat!=-1){
			printf("Calisma saatini giriniz:");
			scanf("%d",&saat);
				if(saat==-1){
					printf("Cikis yaptiniz...");
					break;
				}
			printf("Calisanin saatlik ucretini giriniz:");
			scanf("%f",&ucret);
				if(saat!=-1){
					if(saat<=40){
						maas=saat*ucret;
						printf("Calisanin maasi=%.2f$\n",maas);
					}
					else if(saat>40){
						maas=(40*ucret)+(saat-40)*ucret+((saat-40)*ucret/2);
						printf("Calisanin maasi=%.2f$\n",maas);
					}
				}
			
			
			
		}
		
		
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
