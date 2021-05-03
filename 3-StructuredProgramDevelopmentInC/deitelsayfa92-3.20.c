#include <stdio.h>
#include <conio.h>


int main(){
	int gun;
	float anaPara,faizOran,faizUcret;
		while(anaPara!=-1){
			printf("Anaparayi giriniz:");
			scanf("%f",&anaPara);
				if(anaPara==-1){
					printf("cikis yaptiniz...");
					break;
				}
			printf("Faiz oranini giriniz:");
			scanf("%f",&faizOran);
			printf("Kac gunluk faiz:");	
			scanf("%d",&gun);
				
				
				if(anaPara!=-1){
					faizUcret=(float)anaPara*faizOran*gun/365;
					printf("Faiz ucreti %.2f$'dir.\n",faizUcret);
				}
			
		}
			
			
			
		
			
		
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
