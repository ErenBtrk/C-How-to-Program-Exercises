#include <stdio.h>
#include <conio.h>
#define BOYUT 20
#define FREKANS_BOYUT 101

int main(){
	int dizi[BOYUT],frekans[FREKANS_BOYUT],i,j;
		for(i=0;i<FREKANS_BOYUT;i++){
			frekans[i]=0;
		}
		for(i=0;i<BOYUT;i++){
			printf("10 ve 100 arasinda sayi giriniz:");
			scanf("%d",&dizi[i]);
			frekans[dizi[i]]++;
			
		}
		for(i=0;i<FREKANS_BOYUT;i++){
			if(frekans[i]!=0){
				printf("%d ",i);
		}
		}
	
	
	
	getch();
	return 0;
}
