#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int sayi1,sayi2,carpim=1,cevap=0;
		srand(time(NULL));
		while(cevap!=-1){
			sayi1=1+rand()%9;
			sayi2=1+rand()%9;
			carpim=sayi1*sayi2;
			printf("%d kere %d kactir?(cikis icin -1)=",sayi1,sayi2);
			scanf("%d",&cevap);
				if(cevap==-1){
				printf("Cikis yaptiniz.");
				break;
				}
				if(cevap==carpim){
				printf("Dogru cevap.\n");
				}
				else{
					while(cevap!=carpim){
						printf("Yanlis cevap.Tekrar deneyin=");
						scanf("%d",&cevap);
							if(cevap==carpim){
								printf("Dogru cevap.\n");
							}
							else if(cevap==-1){
								printf("Cikis yaptiniz.");
								break;
							}	
					}
				}
		}
	
	
	getch();
	return 0;
}
