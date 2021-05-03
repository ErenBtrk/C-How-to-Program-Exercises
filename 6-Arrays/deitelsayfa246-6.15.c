#include <stdio.h>
#include <conio.h>
#define BOYUT 20

int main(){
	int dizi[BOYUT]={0},i,j,k=0,tekrar,deger;
		for(i=0;i<BOYUT;i++){
			tekrar=0;
			printf("10 ve 100 arasinda bir tamsayi giriniz:");
			scanf("%d",&deger);
				for(j=0;j<k;j++){
					if(deger==dizi[j]){
						tekrar=1;
						break;
				}
					}
					if(tekrar==0){
						dizi[k++]=deger;
					}
				
		}
		for(i=0;dizi[i]!=0;i++){
			printf("%d ",dizi[i]);
		}
			
		
		
	
	
		
	
	
	getch();
	return 0;
}
