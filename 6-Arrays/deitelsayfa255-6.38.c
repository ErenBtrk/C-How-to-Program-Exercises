#include <stdio.h>
#include <conio.h>
#define BOYUT 10
#define MAX_RANGE 100

int enKucukYineleme(int[],int,int);

int main(){
	srand(time(NULL));
	int i,dizi[BOYUT],enKucuk;
		printf("Dizi elemanlari:\n");
		for(i=0;i<BOYUT;i++){
			dizi[i]=1+rand()%MAX_RANGE;
			printf("%d ",dizi[i]);	
		}
		
	enKucuk=enKucukYineleme(dizi,0,BOYUT-1);
	printf("\nEn kucuk eleman=%d\n",enKucuk);

	
	
	
	getch();
	return 0;
}

int enKucukYineleme(int dizi[],int low,int high){
	static int enK=MAX_RANGE;
		if(dizi[low]<enK){
			enK=dizi[low];
		}
		if(low==high){
			return enK;
		}
		else{
			return enKucukYineleme(dizi,low+1,high);
		}
	
	
}
