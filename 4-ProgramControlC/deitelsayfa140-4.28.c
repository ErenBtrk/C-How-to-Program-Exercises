#include <stdio.h>
#include <conio.h>


int main(){
	int i,maasKodu,saat,uretilenMal;
	float maas,brutSatis;
		while(maasKodu!=-1){
			printf("Maas kodunu giriniz(Cikis icin -1)):");
			scanf("%d",&maasKodu);
				if(maasKodu==-1){
					printf("Cikis yapildi.");
					break;
				}
			switch(maasKodu){
				case 1:
					maas=1500.0;
					printf("Mudurun haftalik maasi=%.2f\n",maas);
					break;
				case 2:
					printf("Vardiyali iscinin haftalik calisma saatini giriniz:");
					scanf("%d",&saat);
					if(saat<=40){
					maas=saat*15.0;
					}
					if(saat>40){
					maas=40*15.0+(saat-40)*15.0*1.5;
					}
					printf("Iscinin haftalik maasi=%.2f\n",maas);
					break;
				case 3:	
					printf("Komisyon iscisinin haftalik brut satisini giriniz:");
					scanf("%f",&brutSatis);
					maas=250.0+brutSatis*5.70/100;
					printf("Iscinin haftalik maasi=%.2f\n",maas);
					break;
					
				case 4:
					printf("Parca iscisinin haftalik urettigi mal miktarini giriniz:");
					scanf("%d",&uretilenMal);
					maas=uretilenMal*5.0;
					printf("Iscinin haftalik maasi=%.2f\n",maas);
					break;
				default:
					printf("Yanlis giris yaptiniz.Maas kodlari=1,2,3,4\n");
					break;
			}
		}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
