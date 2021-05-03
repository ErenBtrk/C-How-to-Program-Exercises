#include <stdio.h>
#include <conio.h>
#include <math.h>

double ucretHesapla(double);

int main(){
	int i=1;
	double saat,toplamSaat,toplamUcret;
		printf("Araba\tSaat\tUcret\t\n");
		for(i=1;i<=3;i++){
			printf("Park saatini giriniz:");
			scanf("%lf",&saat);
			printf("%d\t%.1f\t%.2f\t\n",i,saat,ucretHesapla(saat));
			toplamUcret=toplamUcret+ucretHesapla(saat);
			toplamSaat=toplamSaat+saat;
		}
			printf("TOPLAM\t%.1f\t%.2f\t\n",toplamSaat,toplamUcret);
		
getch();
return 0;
}
	
 double ucretHesapla(double x){
	double ucret;
	if(x<=3.0){
		ucret=2.00;
	}
	else if(x>3.0&&x<24.0){
		ucret=2.00+(x-3)*0.5;
	}
	else if(x>=24.0){
		ucret=10.00;
	}
	return ucret;
	
}
	
	
	
	
	
	
	
	
	


