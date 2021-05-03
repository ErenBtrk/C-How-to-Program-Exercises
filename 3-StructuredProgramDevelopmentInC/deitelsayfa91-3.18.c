#include <stdio.h>
#include <conio.h>


int main(){
	int hesapNo;
	float bakiye,toplamHarcama,kredi,izinVerilen,yeniBakiye;
		while(hesapNo!=-1){
			printf("hesap no giriniz:");
			scanf("%d",&hesapNo);
			if(hesapNo==-1){
				printf("Cikis yaptiniz.");
				break;
			}
			printf("ilk bakiyeyi giriniz:");
			scanf("%f",&bakiye);
			printf("toplam harcalamari giriniz:");
			scanf("%f",&toplamHarcama);
			printf("toplam kredileri giriniz:");
			scanf("%f",&kredi);
			printf("kredi limiti giriniz:");
			scanf("%f",&izinVerilen);
			if(hesapNo!=-1){
				yeniBakiye=bakiye+toplamHarcama-kredi;
				if(yeniBakiye>izinVerilen){
					printf("Hesap no=%d\nKredi limiti=%.2f\nYeni Bakiye=%.2f\nKredi limiti asildi.\n",hesapNo,izinVerilen,yeniBakiye);
				}
			}
			
			
		
		}
		
		
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
