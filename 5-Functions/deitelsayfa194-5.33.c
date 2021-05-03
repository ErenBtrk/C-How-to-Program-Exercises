#include <stdio.h>
#include <conio.h>

void farkliYorum(void);

int main(){
	srand(time(NULL));
	farkliYorum();

	
	
	
	getch();
	return 0;
}

void farkliYorum(void){
	int sayi1,sayi2,carpim,cevap,yorum;
	 	while(cevap!=-1){
	 		sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			carpim=sayi1*sayi2;
			printf("%d kere %d kactir?=",sayi1,sayi2);
			scanf("%d",&cevap);	
				while(cevap!=-1&&cevap!=carpim){
					yorum=rand()%4;
					switch(yorum){
						case 0:
							printf("Hayir.Lutfen tekrar deneyin=");
							break;
						case 1:
							printf("Yanlis.Lutfen tekrar deneyin=");
							break;
						case 2:
							printf("Pes etmeyin.Bir daha deneyin=");
							break;
						case 3:
							printf("Hayir.Denemeye devam edin=");
							break;	
					}
					scanf("%d",&cevap);
				}
				if(cevap!=-1){
					yorum=rand()%4;
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
		 }
	
		
}
