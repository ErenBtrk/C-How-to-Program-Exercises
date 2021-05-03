#include <stdio.h>
#include <conio.h>

void oyun(void);

int main(){
	srand(time(NULL));
	oyun();

	
	
	
	getch();
	return 0;
}

void oyun(void){
	int sayiTut,tahmin,evetHayir;
	do{
		sayiTut=1+rand()%1000;
		printf("1-1000 arasinda bir sayi tuttum.\n");
		printf("Tahmin edebilir misin?\nLutfen ilk tahminini gir=");
		scanf("%d",&tahmin);
	while(tahmin!=sayiTut){
		if(tahmin<sayiTut){
			printf("Cok kucuk.Tekrar deneyin.\n");
		}
		else{
			printf("Cok buyuk.Tekrar deneyin.\n");
		}
		scanf("%d",&tahmin);
	}	
	printf("\nMukemmel.Sayiyi dogru tahmin ettiniz!!!");
	printf("Tekrar oynamak ister misiniz?\n");
	printf("Lutfen E veya H harflerinden birini giriniz:");
	scanf("%d",&evetHayir);
	}
	while((evetHayir=getchar())=='E');
}
