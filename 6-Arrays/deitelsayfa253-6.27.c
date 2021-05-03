#include <stdio.h>
#include <conio.h>

#define BOYUT 20

int main(){
	srand(time(NULL));
	int i,sayi,dizi[BOYUT],frekans[BOYUT]={0},dizi2[BOYUT];
	for(i=0;i<BOYUT;i++){
		sayi=1+rand()%20;
		dizi[i]=sayi;
		frekans[dizi[i]]++;	
		printf("%d ",dizi[i]);
	}
		printf("\n\n\n");
	for(i=0;i<BOYUT;i++){
		if(frekans[i]!=0){
			dizi2[i]=i;
			printf("%d ",dizi2[i]);
		}
	}
	

	
	
	
	getch();
	return 0;
}
