#include <stdio.h>
#include <conio.h>


int main(){
	int i,hesapNo;
	float ilkKredi,bakiye,yeniKredi;
		for(i=1;i<=3;i++){
			printf("Hesap no giriniz:");
			scanf("%d",&hesapNo);
			printf("Ilk kredi limitini giriniz:");
			scanf("%f",&ilkKredi);
			printf("Bakiye giriniz:");
			scanf("%f",&bakiye);
			yeniKredi=ilkKredi/2;
			printf("hesap no=%d\nyeni kredi limiti=%.2f\n",hesapNo,yeniKredi);
			if(yeniKredi<bakiye){
				printf("Limit asildi.\n");
			}
		}
			
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
