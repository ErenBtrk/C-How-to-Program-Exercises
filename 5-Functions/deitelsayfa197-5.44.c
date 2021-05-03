#include <stdio.h>
#include <conio.h>

void basariOlcme(void);

int main(){
	srand(time(NULL));
	basariOlcme();
		
	
	
	
	getch();
	return 0;
}

void basariOlcme(void){
	int i,sayi1,sayi2,carpim,cevap,yorum,yanlis=0,dogru=0,secim;
	double basariYuzdesi;
		printf("1 basamakli sayilarla carpma islemi icin '1',2 basamakli sayilarla carpma islemi icin '2' giriniz:");
		scanf("%d",&secim);
		switch(secim){
			case 1:
			for(i=1;i<=10;i++){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			carpim=sayi1*sayi2;
			printf("%d kere %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				if(cevap==carpim){
					yorum=rand()%4;
					dogru++;
					switch(yorum){
						case 0:
							printf("Cok guzel.\n");
							break;
						case 1:
							printf("Mukemmel.\n");
							break;
						case 2:
							printf("Aferin.\n");
							break;
						case 3:
							printf("Boyle devam et.\n");
							break;
					}
				}
				else{
					yorum=rand()%4;
					yanlis++;
					switch(yorum){
						case 0:
							printf("Hayir.Lutfen tekrar deneyin.\n");
							break;
						case 1:
							printf("Yanlis.Lutfen tekrar deneyin.\n");
							break;
						case 2:
							printf("Pes etmeyin.Bir daha deneyin.\n");
							break;
						case 3:
							printf("Hayir.Denemeye devam edin.\n");
							break;	
					}
				}
		}
		printf("%d dogru\n%d yanlis\n",dogru,yanlis);
		basariYuzdesi=dogru*10;
		printf("Basari yuzdeniz=%.2f\n",basariYuzdesi);
			if(basariYuzdesi>=75.00){
				printf("Tebrikler.Basariliydiniz.");
			}
			else{
				printf("Ogretmeninden yardim al.");
			}
			break;
			case 2:
			for(i=1;i<=10;i++){
	 		sayi1=10+rand()%89;
			sayi2=10+rand()%89;
			carpim=sayi1*sayi2;
			printf("%d kere %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				if(cevap==carpim){
					yorum=rand()%4;
					dogru++;
					switch(yorum){
						case 0:
							printf("Cok guzel.\n");
							break;
						case 1:
							printf("Mukemmel.\n");
							break;
						case 2:
							printf("Aferin.\n");
							break;
						case 3:
							printf("Boyle devam et.\n");
							break;
					}
				}
				else{
					yorum=rand()%4;
					yanlis++;
					switch(yorum){
						case 0:
							printf("Hayir.Lutfen tekrar deneyin.\n");
							break;
						case 1:
							printf("Yanlis.Lutfen tekrar deneyin.\n");
							break;
						case 2:
							printf("Pes etmeyin.Bir daha deneyin.\n");
							break;
						case 3:
							printf("Hayir.Denemeye devam edin.\n");
							break;	
					}
				}
		}
		printf("%d dogru\n%d yanlis\n",dogru,yanlis);
		basariYuzdesi=dogru*10;
		printf("Basari yuzdeniz=%.2f\n",basariYuzdesi);
			if(basariYuzdesi>=75.00){
				printf("Tebrikler.Basariliydiniz.");
			}
			else{
				printf("Ogretmeninden yardim al.");
			}
			break;
}
		}


