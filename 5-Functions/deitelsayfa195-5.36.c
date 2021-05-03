#include <stdio.h>
#include <conio.h>

void tahminOyunu(void);

int main(){
	srand(time(NULL));
	tahminOyunu();

	
	
	
	getch();
	return 0;
}

void tahminOyunu(void){
	int sayiTut,tahmin,evetHayir;
	do{
		int toplamTahmin=0;
		sayiTut=1+rand()%1000;
		printf("1-1000 arasinda bir sayi tuttum.\n");
		printf("Tahmin edebilir misin?\nLutfen ilk tahminini gir=");
		scanf("%d",&tahmin);
	while(tahmin!=sayiTut){
		toplamTahmin++;
		if(tahmin<sayiTut){
			printf("Cok kucuk.Tekrar deneyin.\n");
		}
		else{
			printf("Cok buyuk.Tekrar deneyin.\n");
		}
		scanf("%d",&tahmin);
	}
	if(tahmin==sayiTut){
	toplamTahmin++;	
	printf("\nMukemmel.Sayiyi dogru tahmin ettiniz!!!\n");
	printf("Toplam tahmin=%d\n",toplamTahmin);
		if(toplamTahmin<10){
			printf("Siz sirri biliyorsunuz yada sanslisiniz.\n");
		}
		else if(toplamTahmin==10){
			printf("Ahah...Siz sirri biliyorsunuz...\n");
		}
		else{
			printf("Daha iyisini yapabilirsiniz...\n");
		}
	printf("Tekrar oynamak ister misiniz?\n");
	}
	printf("Lutfen E veya H harflerinden birini giriniz:");
	scanf("%d",&evetHayir);
	}
	while((evetHayir=getchar())=='E');
}
