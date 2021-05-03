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
	int i,sayi1,sayi2,toplama,cikarma,carpim,bolme,cevap,yorum,yanlis=0,dogru=0,secim,randomIslem;
	double basariYuzdesi;
		printf("Toplama=[1]\nCikarma=[2]\nCarpma=[3]\nBolme=[4]\nKarisik=[5]\n");
		scanf("%d",&secim);
		switch(secim){
			case 1:
			for(i=1;i<=10;i++){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			toplama=sayi1+sayi2;
			printf("%d + %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				if(cevap==toplama){
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
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			cikarma=sayi1-sayi2;
			printf("%d - %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				if(cevap==cikarma){
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
			case 3:
				for(i=1;i<=10;i++){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			carpim=sayi1*sayi2;
			printf("%d * %d kactir?=",sayi1,sayi2);
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
			case 4:
				for(i=1;i<=10;i++){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			bolme=sayi1/sayi2;
			printf("%d / %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				if(cevap==bolme){
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
				case 5:
			for(i=1;i<=10;i++){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			randomIslem=1+rand()%4;
			switch(randomIslem){
				case 1:
				toplama=sayi1+sayi2;
				printf("%d + %d kactir?=",sayi1,sayi2);
				scanf("%d",&cevap);	
				if(cevap==toplama){
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
				break;
				case 2:
				cikarma=sayi1-sayi2;
				printf("%d - %d kactir?=",sayi1,sayi2);
				scanf("%d",&cevap);	
				if(cevap==cikarma){
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
				break;
				case 3:
				carpim=sayi1*sayi2;
				printf("%d * %d kactir?=",sayi1,sayi2);
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
				break;
				case 4:
				bolme=sayi1/sayi2;
				printf("%d / %d kactir?=",sayi1,sayi2);
				scanf("%d",&cevap);	
				if(cevap==bolme){
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
				break;
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


