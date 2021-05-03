#include <stdio.h>
#include <conio.h>


int main(){
	int urunNo,i,miktar;
	float fiyat,satis,toplam,genelToplam;
		for(i=1;i<=5;i++){
			printf("Lutfen urun no giriniz:");
			scanf("%d",&urunNo);
			printf("Lutfen satilan urun miktarini giriniz:");
			scanf("%d",&miktar);
			
				switch(urunNo){
					case 1:
					printf("Toplam satis=%.2f$\n",toplam=2.98*miktar);
					genelToplam=genelToplam+toplam;
					break;
					case 2:
					printf("Toplam satis=%.2f$\n",toplam=4.50*miktar);
					genelToplam=genelToplam+toplam;
					break;
					case 3:
					printf("Toplam satis=%.2f$\n",toplam=9.98*miktar);
					genelToplam=genelToplam+toplam;
					break;
					case 4:
					printf("Toplam satis=%.2f$\n",toplam=4.49*miktar);
					genelToplam=genelToplam+toplam;
					break;
					case 5:	
					printf("Toplam satis=%.2f$\n",toplam=6.87*miktar);
					genelToplam=genelToplam+toplam;	
					break;
					default:
					printf("Boyle bir urun no bulunmamaktadir.");
					break;
				}
				
		}		
			printf("Tum urunlerin toplam satisi=%.2f$",genelToplam);
	
	
	
	
	
	
	
	getch();
	return 0;
}
