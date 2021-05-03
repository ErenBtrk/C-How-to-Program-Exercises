#include <stdio.h>
#include <conio.h>

int saatCevir(int,int,int);

int main(){
	int saat,dakika,saniye,temp;
		printf("ilk saati giriniz(saat,dakika,saniye):");
		scanf("%d\n%d\n%d",&saat,&dakika,&saniye);
		temp=saatCevir(saat,dakika,saniye);
		printf("ikinci saati giriniz(saat,dakika,saniye):");
		scanf("%d\n%d\n%d",&saat,&dakika,&saniye);
		printf("girdiginiz 2 saat arasindaki saniye farki:%d",saatCevir(saat,dakika,saniye)-temp);
		
	
	getch();
	return 0;
}

int saatCevir(int a,int b,int c){
	int saniye;
	saniye=a*60*60;
	saniye=saniye+b*60;
	saniye=saniye+c;
	return saniye;
}

